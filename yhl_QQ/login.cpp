#include "login.h"
#include "ui_login.h"
#include "person.h"
#include "person_data.h"
#include "qq_list.h"
#include "rigster_dialog.h"
#include "lazy_holder.h"
#include <iostream>
#include <assert.h>
#include <functional>
#include <QApplication>
#include <QDesktopWidget>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login),
    database(std::make_shared<personData>())
    // 延迟实现固然好, 但是也要估计初始化槽的问题
{
    ui->setupUi(this);
    ui->username->setText ("2016211650");   // 这个可以考虑每次读取文件中的默认用户名和密码
    ui->password->setText ("fluence");
    this->move ((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);
}

login::~login()
{
    std::lock_guard<std::mutex> lck(mtx);
    assert (ui);
    delete ui;
    ui = nullptr;
}

void login::rigsterOne(const QString username, const QString password)
{
    auto _username = username.toStdString ();
    auto _password = password.toStdString ();
    assert (this->database);
    database->emplace(_username, _password);
}

void login::closeEvent(QCloseEvent *)
{
    this->close ();
}



// ---------------------------- slots ----------------------------------



void login::on_rigster_button_clicked()
{
    this->hide ();
    this->rigster = YHL::singleton<rigster_dialog>::getInstance();
    assert (rigster);

    YHL::call_once([&]{
        connect (rigster.get (), &rigster_dialog::send_name,
                 [&](const QString name){
            if(!database->find(name.toStdString ()))
                rigster->get_confirm ();
            else
                QMessageBox::information (this, "警告", "该用户名已存在",
                                          QMessageBox::Yes);
        });
        connect (rigster.get (), &rigster_dialog::sendData,
                 [&](const QString name, const QString word){
            this->show ();
            this->rigsterOne (name, word);
        });
        connect (rigster.get (), &rigster_dialog::cancelled,
                 [&]{ this->show (); });
    });
    rigster->show ();
}

void login::on_password_textEdited(const QString&)
{
    if(ui->checkBox->isChecked() == false)
        ui->password->setEchoMode (QLineEdit::Password);
    else
        ui->password->setEchoMode (QLineEdit::Normal);
}

void login::on_login_button_clicked()
{
    auto username = ui->username->text ().toStdString ();
    assert(database);
    auto person = database->find (username);
    if(person.get() not_eq nullptr) {
        auto password = ui->password->text ().toStdString ();
        if(person->checkPassword (password)) {
            QMessageBox::information (this, "提示", "登录成功!", QMessageBox::Yes);
            this->hide ();
            QQ = std::make_shared<QQ_list>(person);
            assert (QQ);
            QQ->show ();
        }
        else {
            QMessageBox::information (this, "警告", "密码错误", QMessageBox::Yes);
            ui->password->clear ();
            ui->password->setFocus ();
        }
    }
    else {
        QMessageBox::information (this, "警告", "该用户不存在!", QMessageBox::Yes);
        ui->username->clear ();
        ui->password->clear ();
        ui->username->setFocus ();
    }
}











#include "rigster_dialog.h"
#include "ui_rigster_dialog.h"
#include <QMessageBox>
#include <QDebug>
#include <iostream>

rigster_dialog::rigster_dialog(
        QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rigster_dialog)
{
    ui->setupUi(this);
}

rigster_dialog::~rigster_dialog()
{
    std::lock_guard<std::mutex> lck(mtx);
    delete ui;
    ui = nullptr;
}

void rigster_dialog::get_confirm ()
{
    QMessageBox::information (this, "提示", "你已成功注册, 快去登录 yhl_QQ 吧", QMessageBox::Yes);
    this->close ();
    emit sendData (username, password);
}

void rigster_dialog::on_ok_button_clicked()  // 考虑是否重复
{
    username = ui->username->toPlainText ();
    if(!username.isEmpty ()) {
        password = ui->password->toPlainText ();
        if(!password.isEmpty ()) {
            confirm = ui->confirm->toPlainText ();
            if(!confirm.isEmpty ()) {
                if(password == confirm)
                    emit send_name (username);
                else {
                    QMessageBox::information (this, "警告", "密码不一致", QMessageBox::Yes);
                    ui->password->clear ();
                    ui->confirm->clear ();
                    ui->password->setFocus ();
                }
            }
            else {
                QMessageBox::information (this, "警告", "请确认密码!", QMessageBox::Yes);
                ui->confirm->setFocus ();
            }
        }
        else {
            QMessageBox::information (this, "警告", "密码不能为空", QMessageBox::Yes);
            ui->password->setFocus ();
        }
    }
    else {
        QMessageBox::information (this, "警告", "用户名不能为空", QMessageBox::Yes);
        ui->username->setFocus ();
    }
}

void rigster_dialog::on_cancel_button_clicked()
{
    this->hide ();
    emit cancelled ();
}

void rigster_dialog::closeEvent(QCloseEvent *)
{
    emit cancelled ();
}

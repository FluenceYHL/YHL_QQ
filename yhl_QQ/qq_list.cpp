#include "qq_list.h"
#include "ui_qq_list.h"
#include "person.h"
#include "self_info.h"
#include "singleton.h"
#include <QDesktopWidget>
#include <QIcon>
#include <assert.h>

QQ_list::QQ_list(std::shared_ptr<person> _user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QQ_list),
    user(_user)
{
    ui->setupUi(this);
    this->move ((QApplication::desktop()->width() - this->width())/2,
                (QApplication::desktop()->height() - this->height())/2);
    this->initQQlist ();
}

QQ_list::~QQ_list()
{
    std::lock_guard<std::mutex> lck(mtx);
    assert (ui);
    delete ui;
    ui = nullptr;
}

void QQ_list::initQQlist()
{
    auto username = QString::fromStdString (user->getUsername ());
    ui->username->setText (username);

    this->setWindowTitle (tr("YHL_QQ"));
    QIcon icon;
    icon.addFile ("./icons/button/1.bmp");
    ui->head_icons->setIcon(icon);
    ui->head_icons->setIconSize (this->size ());

    QIcon icon2;
    icon2.addFile ("./icons/button/option.ico");
    ui->settings->setIcon (icon2);
    ui->settings->setIconSize (ui->settings->size ());

    QIcon icon3;
    icon3.addFile ("./icons/button/User.png");
    ui->menu->setIcon (icon3);

    QIcon icon4;
    icon4.addFile ("./icons/button/screen_shot.png");
    ui->shot_screen->setIcon (icon4);

    // 可以考虑 detach 一个线程, 登录过几秒后提示填写个人信息

    //ui->main_list->setColumnCount (3);
    //ui->main_list->setColumnWidth (0, this->width () / 3);
}

void QQ_list::closeEvent(QCloseEvent *)
{
    this->close ();
}

void QQ_list::on_head_icons_clicked()
{
    this->self_infor = YHL::singleton<self_info>::getInstance(this->user);
    assert (this->self_infor);
    self_infor->show ();
}

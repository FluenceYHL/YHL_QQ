#include "self_info.h"
#include "ui_self_info.h"
#include <QPaintEvent>
#include <QPainter>
#include "person.h"

self_info::self_info(std::shared_ptr<person> _user,
                     QWidget *parent) :
    QWidget(parent),
    ui(new Ui::self_info),
    user(_user)
{
    ui->setupUi(this);
    this->init ();
}

self_info::~self_info()
{
    assert (ui);
    delete ui;
    ui = nullptr;
}

void self_info::init()
{
    this->setWindowTitle ("我的信息");

    this->image.load ("./icons/background/self_info.jpg");
    this->res = this->image.scaled (ui->self_picture->width (),
        ui->self_picture->height ());
    ui->self_picture->setPixmap (QPixmap::fromImage (this->res));

    ui->username->setText (QString::fromStdString (user->getUsername ()));
    ui->signature->setText (QString::fromStdString(user->getSignature ()));
    ui->age->setText (QString::fromStdString(user->getAge ()));
    ui->hometown->setText (QString::fromStdString(user->getHowntown ()));
    auto hobbys = user->getHobbys ();
    std::string ans = "";
    for(const auto& it : hobbys) {
        ans += it; ans += "  ";
    }
    ui->hobbys->setText (QString::fromStdString(ans));
}

void self_info::closeEvent(QCloseEvent *)
{
    this->hide ();
}

void self_info::paintEvent(QPaintEvent *)
{
    //QPixmap pixmap = QPixmap("./icons/background/self_info.jpg").scaled(ui->self_picture->size());
    //QPainter painter(ui->self_picture);
    //painter.drawPixmap(ui->self_picture->rect(), pixmap);
}

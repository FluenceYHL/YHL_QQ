#include "person.h"
#include "scopeguard.h"
#include <QDebug>
#include <fstream>
#include <QMessageBox>

person::person(const std::string& _username,
               const std::string& _password)
    : username(_username), password(_password)
{}

person::person(const std::string &_username, const std::string &_password,
               const std::string &_path)
    : username(_username), password(_password)  // 记得可以转 std::move
{
    auto path = "./database/more/" + _path;
    qDebug() << QString::fromStdString (path);

    std::ifstream in(path.c_str ());
    if(in.is_open () == false)
        QMessageBox::information (nullptr, "警告", "用户数据文件无法打开", QMessageBox::Yes);
    ON_SCOPE_EXIT ([&]{
        in.close ();                  // assert
        qDebug() << QString::fromStdString (username) << "\t 读取成功";
    });
    std::string name;
    in >> name;
    qDebug() << "name = " << QString::fromStdString (name);
    assert(name == username);
    std::string a, b, c, d, e, f;
    in >> a >> b >> c >> d;
    this->more = std::make_shared<more_info>(a, b, c, d);
    assert (this->more);
    int hobbySize = 0;
    in >> hobbySize;
    qDebug() << "hobby size  =  " << hobbySize;
    for(int i = 0;i < hobbySize; ++i) {
        in >> e;
        this->more->hobbys.emplace_back(e);
    }
    // 记得写入文件也要这样做
}

const std::string& person::getUsername() const {
    return this->username;
}

const std::string& person::getPassword() const {
    return this->password;
}

const std::string &person::getSignature() const
{
    assert (more);
    return more->signature;
}

const std::string &person::getAge() const
{
    assert (more);
    return more->age;
}

const std::string &person::getHowntown() const
{
    assert (more);
    return more->hometown;
}

const std::list<std::string> &person::getHobbys() const
{
    assert (more);
    return more->hobbys;
}

void person::setUsername(const std::string& _username) {
    this->username = _username;
}

void person::setPassword(const std::string& _password) {
    this->password = _password;
}

void person::setSignature(const std::string &_signature)
{
    assert (more);
    more->signature = _signature;
}

void person::setAge(const std::string &_Age)
{
    assert (more);
    more->age = _Age;
}

void person::setHometowm(const std::string &_hometown)
{
    assert (more);
    more->hometown = _hometown;
}

void person::emplaceHobby(const std::string &_hobby)
{
    assert (more);
    more->hobbys.emplace_back(_hobby);
}

bool person::checkUsername(const std::string& _username) const {
    return this->username == _username;
}

bool person::checkPassword(const std::string& _password) const {
    return this->password == _password;
}

std::ifstream& operator>>(std::ifstream& in, person& one) {
    in >> one.username;
    in >> one.password;
    return in;
}

std::ofstream& operator<<(std::ofstream& out, const person& one) {
    out << one.username << " ";
    out << one.password << std::endl;
    return out;
}

#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <memory>
#include <mutex>

class rigster_dialog;
class personData;
class QQ_list;

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

public:
    void rigsterOne(const QString, const QString);

private:
    void closeEvent(QCloseEvent*);

private slots:
    void on_rigster_button_clicked();

    void on_password_textEdited(const QString &arg1);

    void on_login_button_clicked();

private:
    Ui::login *ui;
    // 也可考虑用 std::unique_ptr
    std::shared_ptr<rigster_dialog> rigster;
    std::shared_ptr<QQ_list> QQ = nullptr;
    std::mutex mtx;

    // person
    std::shared_ptr< personData > database;
};

#endif // LOGIN_H

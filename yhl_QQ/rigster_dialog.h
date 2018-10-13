#ifndef RIGSTER_DIALOG_H
#define RIGSTER_DIALOG_H

#include <QDialog>
#include <mutex>
#include <functional>

namespace Ui {
class rigster_dialog;
}

class rigster_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit rigster_dialog(
            QWidget *parent = nullptr);
    ~rigster_dialog();

public:
    void get_confirm();

private slots:
    void on_ok_button_clicked();

    void on_cancel_button_clicked();

signals:
    void send_name(const QString);

    void sendData(const QString, const QString);

    void cancelled();

private:
    Ui::rigster_dialog *ui;

    std::mutex mtx;

    QString username, password, confirm;

    void closeEvent(QCloseEvent*);
};

#endif // RIGSTER_DIALOG_H

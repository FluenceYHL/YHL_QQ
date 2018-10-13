#ifndef SELF_INFO_H
#define SELF_INFO_H

#include <QWidget>
#include <memory>

namespace Ui {
class self_info;
}

class person;

class self_info : public QWidget
{
    Q_OBJECT

public:
    explicit self_info(std::shared_ptr<person> _user,
                       QWidget *parent = nullptr);
    ~self_info();

private:
    void init();

private:
    Ui::self_info *ui;
    QImage image, res;
    std::shared_ptr<person> user;

    void closeEvent(QCloseEvent*);

    void paintEvent(QPaintEvent*);
};

#endif // SELF_INFO_H

#ifndef QQ_LIST_H
#define QQ_LIST_H

#include <QWidget>
#include <memory>
#include <mutex>


class person;
class self_info;

namespace Ui {
class QQ_list;
}

class QQ_list : public QWidget
{
    Q_OBJECT

public:
    explicit QQ_list(std::shared_ptr<person> _user,
                     QWidget *parent = nullptr);
    ~QQ_list();

private slots:
    void on_head_icons_clicked();

private:
    Ui::QQ_list *ui;

    std::mutex mtx;

    std::shared_ptr<person> user;

    std::shared_ptr<self_info> self_infor;

    void initQQlist();

    void closeEvent(QCloseEvent*);
};

#endif // QQ_LIST_H

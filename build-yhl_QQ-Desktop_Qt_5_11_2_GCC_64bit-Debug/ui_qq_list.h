/********************************************************************************
** Form generated from reading UI file 'qq_list.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQ_LIST_H
#define UI_QQ_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQ_list
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *search;
    QLineEdit *search_line;
    QPushButton *head_icons;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *menu;
    QToolButton *shot_screen;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_friends;
    QSpacerItem *horizontalSpacer;
    QToolButton *settings;
    QLabel *username;

    void setupUi(QWidget *QQ_list)
    {
        if (QQ_list->objectName().isEmpty())
            QQ_list->setObjectName(QStringLiteral("QQ_list"));
        QQ_list->resize(264, 522);
        gridLayoutWidget_2 = new QWidget(QQ_list);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 120, 261, 371));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(gridLayoutWidget_2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(QQ_list);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 80, 261, 33));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        search = new QPushButton(horizontalLayoutWidget);
        search->setObjectName(QStringLiteral("search"));
        search->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(search);

        search_line = new QLineEdit(horizontalLayoutWidget);
        search_line->setObjectName(QStringLiteral("search_line"));

        horizontalLayout->addWidget(search_line);

        head_icons = new QPushButton(QQ_list);
        head_icons->setObjectName(QStringLiteral("head_icons"));
        head_icons->setGeometry(QRect(10, 10, 51, 51));
        horizontalLayoutWidget_3 = new QWidget(QQ_list);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 490, 261, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        menu = new QToolButton(horizontalLayoutWidget_3);
        menu->setObjectName(QStringLiteral("menu"));

        horizontalLayout_3->addWidget(menu);

        shot_screen = new QToolButton(horizontalLayoutWidget_3);
        shot_screen->setObjectName(QStringLiteral("shot_screen"));
        shot_screen->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(shot_screen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(QQ_list);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 40, 161, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_friends = new QPushButton(horizontalLayoutWidget_2);
        add_friends->setObjectName(QStringLiteral("add_friends"));

        horizontalLayout_2->addWidget(add_friends);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        settings = new QToolButton(QQ_list);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(70, 53, 26, 21));
        username = new QLabel(QQ_list);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(70, 10, 181, 21));

        retranslateUi(QQ_list);

        QMetaObject::connectSlotsByName(QQ_list);
    } // setupUi

    void retranslateUi(QWidget *QQ_list)
    {
        QQ_list->setWindowTitle(QApplication::translate("QQ_list", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QQ_list", "\346\266\210\346\201\257", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("QQ_list", "\347\276\244\347\273\204", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("QQ_list", "\345\245\275\345\217\213", nullptr));
        search->setText(QApplication::translate("QQ_list", "\346\220\234\347\264\242", nullptr));
        head_icons->setText(QString());
        menu->setText(QApplication::translate("QQ_list", "...", nullptr));
        shot_screen->setText(QApplication::translate("QQ_list", "...", nullptr));
        add_friends->setText(QApplication::translate("QQ_list", "\345\212\240\345\245\275\345\217\213/\347\276\244", nullptr));
        settings->setText(QApplication::translate("QQ_list", "...", nullptr));
        username->setText(QApplication::translate("QQ_list", "YHL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQ_list: public Ui_QQ_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQ_LIST_H

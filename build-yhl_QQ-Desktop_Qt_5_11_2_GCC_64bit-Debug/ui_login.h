/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *login_button;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *rigster_button;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(350, 250);
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 51, 21));
        login_button = new QPushButton(centralWidget);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setGeometry(QRect(70, 200, 71, 31));
        username = new QLineEdit(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(120, 60, 151, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 41, 21));
        password = new QLineEdit(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(120, 130, 151, 31));
        rigster_button = new QPushButton(centralWidget);
        rigster_button->setObjectName(QStringLiteral("rigster_button"));
        rigster_button->setGeometry(QRect(200, 200, 71, 31));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(280, 130, 51, 23));
        login->setCentralWidget(centralWidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        login_button->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        rigster_button->setText(QApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        checkBox->setText(QApplication::translate("login", "\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

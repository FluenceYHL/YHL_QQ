/********************************************************************************
** Form generated from reading UI file 'self_info.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELF_INFO_H
#define UI_SELF_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_self_info
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *username;
    QLabel *signature;
    QLabel *age;
    QLabel *hometown;
    QLabel *hobbys;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QLabel *self_picture;

    void setupUi(QWidget *self_info)
    {
        if (self_info->objectName().isEmpty())
            self_info->setObjectName(QStringLiteral("self_info"));
        self_info->resize(331, 492);
        label = new QLabel(self_info);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 67, 17));
        label_2 = new QLabel(self_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 67, 17));
        label_3 = new QLabel(self_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 67, 17));
        label_4 = new QLabel(self_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 67, 17));
        label_5 = new QLabel(self_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 67, 17));
        username = new QLabel(self_info);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(130, 30, 111, 21));
        signature = new QLabel(self_info);
        signature->setObjectName(QStringLiteral("signature"));
        signature->setGeometry(QRect(130, 70, 101, 21));
        age = new QLabel(self_info);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(130, 110, 121, 21));
        hometown = new QLabel(self_info);
        hometown->setObjectName(QStringLiteral("hometown"));
        hometown->setGeometry(QRect(130, 150, 121, 21));
        hobbys = new QLabel(self_info);
        hobbys->setObjectName(QStringLiteral("hobbys"));
        hobbys->setGeometry(QRect(80, 190, 161, 61));
        toolButton = new QToolButton(self_info);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(270, 30, 26, 24));
        toolButton_2 = new QToolButton(self_info);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(270, 70, 26, 24));
        toolButton_3 = new QToolButton(self_info);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(270, 110, 26, 24));
        toolButton_4 = new QToolButton(self_info);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(270, 150, 26, 24));
        toolButton_5 = new QToolButton(self_info);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(270, 190, 26, 24));
        self_picture = new QLabel(self_info);
        self_picture->setObjectName(QStringLiteral("self_picture"));
        self_picture->setGeometry(QRect(0, 270, 331, 221));

        retranslateUi(self_info);

        QMetaObject::connectSlotsByName(self_info);
    } // setupUi

    void retranslateUi(QWidget *self_info)
    {
        self_info->setWindowTitle(QApplication::translate("self_info", "Form", nullptr));
        label->setText(QApplication::translate("self_info", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("self_info", "\344\270\252\346\200\247\347\255\276\345\220\215", nullptr));
        label_3->setText(QApplication::translate("self_info", "\347\210\261\345\245\275", nullptr));
        label_4->setText(QApplication::translate("self_info", "\345\271\264\351\276\204", nullptr));
        label_5->setText(QApplication::translate("self_info", "\345\234\260\345\214\272", nullptr));
        username->setText(QApplication::translate("self_info", "TextLabel", nullptr));
        signature->setText(QApplication::translate("self_info", "TextLabel", nullptr));
        age->setText(QApplication::translate("self_info", "TextLabel", nullptr));
        hometown->setText(QApplication::translate("self_info", "TextLabel", nullptr));
        hobbys->setText(QApplication::translate("self_info", "\350\277\231\344\270\252\344\272\272\345\245\275\346\207\222\345\223\246", nullptr));
        toolButton->setText(QApplication::translate("self_info", "...", nullptr));
        toolButton_2->setText(QApplication::translate("self_info", "...", nullptr));
        toolButton_3->setText(QApplication::translate("self_info", "...", nullptr));
        toolButton_4->setText(QApplication::translate("self_info", "...", nullptr));
        toolButton_5->setText(QApplication::translate("self_info", "...", nullptr));
        self_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class self_info: public Ui_self_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELF_INFO_H

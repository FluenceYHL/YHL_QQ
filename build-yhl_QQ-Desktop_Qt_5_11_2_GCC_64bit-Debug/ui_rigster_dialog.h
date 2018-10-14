/********************************************************************************
** Form generated from reading UI file 'rigster_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGSTER_DIALOG_H
#define UI_RIGSTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_rigster_dialog
{
public:
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *username;
    QTextEdit *password;
    QTextEdit *confirm;
    QLabel *label_3;

    void setupUi(QDialog *rigster_dialog)
    {
        if (rigster_dialog->objectName().isEmpty())
            rigster_dialog->setObjectName(QStringLiteral("rigster_dialog"));
        rigster_dialog->resize(337, 246);
        ok_button = new QPushButton(rigster_dialog);
        ok_button->setObjectName(QStringLiteral("ok_button"));
        ok_button->setGeometry(QRect(70, 190, 71, 31));
        cancel_button = new QPushButton(rigster_dialog);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(180, 190, 71, 31));
        label = new QLabel(rigster_dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 51, 21));
        label_2 = new QLabel(rigster_dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 41, 21));
        username = new QTextEdit(rigster_dialog);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(100, 40, 161, 31));
        password = new QTextEdit(rigster_dialog);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(100, 90, 161, 31));
        confirm = new QTextEdit(rigster_dialog);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(100, 140, 161, 31));
        label_3 = new QLabel(rigster_dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 41, 21));

        retranslateUi(rigster_dialog);

        QMetaObject::connectSlotsByName(rigster_dialog);
    } // setupUi

    void retranslateUi(QDialog *rigster_dialog)
    {
        rigster_dialog->setWindowTitle(QApplication::translate("rigster_dialog", "Dialog", nullptr));
        ok_button->setText(QApplication::translate("rigster_dialog", "\347\241\256\345\256\232", nullptr));
        cancel_button->setText(QApplication::translate("rigster_dialog", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("rigster_dialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("rigster_dialog", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("rigster_dialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rigster_dialog: public Ui_rigster_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGSTER_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created: Mon Nov 23 15:08:56 2015
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginBtn;
    QPushButton *cancelBtn;
    QLabel *login_top;

    void setupUi(QWidget *loginDlg)
    {
        if (loginDlg->objectName().isEmpty())
            loginDlg->setObjectName(QString::fromUtf8("loginDlg"));
        loginDlg->resize(448, 318);
        label = new QLabel(loginDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 120, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(loginDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 180, 51, 31));
        label_2->setFont(font);
        usrLineEdit = new QLineEdit(loginDlg);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(160, 120, 221, 31));
        pwdLineEdit = new QLineEdit(loginDlg);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(160, 180, 221, 31));
        loginBtn = new QPushButton(loginDlg);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(100, 250, 111, 31));
        cancelBtn = new QPushButton(loginDlg);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(250, 250, 111, 31));
        login_top = new QLabel(loginDlg);
        login_top->setObjectName(QString::fromUtf8("login_top"));
        login_top->setGeometry(QRect(0, 0, 489, 74));
        login_top->setStyleSheet(QString::fromUtf8("border-image: url(:/lujiazui/image/login/toubu.png);"));

        retranslateUi(loginDlg);

        QMetaObject::connectSlotsByName(loginDlg);
    } // setupUi

    void retranslateUi(QWidget *loginDlg)
    {
        loginDlg->setWindowTitle(QApplication::translate("loginDlg", "\347\231\273\351\231\206\345\205\245\345\217\243", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginDlg", "\350\264\246  \346\210\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loginDlg", "\345\257\206  \347\240\201", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("loginDlg", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("loginDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        login_top->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginDlg: public Ui_loginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *message_txt;
    QTextEdit *dataSend_txt;
    QComboBox *port_cb;
    QComboBox *baud_cb;
    QTextEdit *code_txt;
    QPushButton *connect_butt;
    QPushButton *send_butt;
    QPushButton *clear_butt;
    QPushButton *refresh_butt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *tab_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1043, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 10, 1001, 661));
        tab = new QWidget();
        tab->setObjectName("tab");
        message_txt = new QTextEdit(tab);
        message_txt->setObjectName("message_txt");
        message_txt->setGeometry(QRect(20, 120, 951, 431));
        dataSend_txt = new QTextEdit(tab);
        dataSend_txt->setObjectName("dataSend_txt");
        dataSend_txt->setGeometry(QRect(20, 560, 951, 51));
        port_cb = new QComboBox(tab);
        port_cb->addItem(QString());
        port_cb->setObjectName("port_cb");
        port_cb->setGeometry(QRect(170, 10, 161, 41));
        QFont font;
        font.setPointSize(10);
        port_cb->setFont(font);
        baud_cb = new QComboBox(tab);
        baud_cb->addItem(QString());
        baud_cb->setObjectName("baud_cb");
        baud_cb->setGeometry(QRect(170, 60, 161, 41));
        baud_cb->setFont(font);
        code_txt = new QTextEdit(tab);
        code_txt->setObjectName("code_txt");
        code_txt->setGeometry(QRect(380, 60, 181, 41));
        connect_butt = new QPushButton(tab);
        connect_butt->setObjectName("connect_butt");
        connect_butt->setGeometry(QRect(610, 10, 111, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        connect_butt->setFont(font1);
        connect_butt->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 127);"));
        send_butt = new QPushButton(tab);
        send_butt->setObjectName("send_butt");
        send_butt->setGeometry(QRect(760, 10, 111, 41));
        send_butt->setFont(font1);
        clear_butt = new QPushButton(tab);
        clear_butt->setObjectName("clear_butt");
        clear_butt->setGeometry(QRect(610, 60, 111, 41));
        clear_butt->setFont(font1);
        refresh_butt = new QPushButton(tab);
        refresh_butt->setObjectName("refresh_butt");
        refresh_butt->setGeometry(QRect(760, 60, 111, 41));
        refresh_butt->setFont(font1);
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 121, 20));
        QFont font2;
        font2.setPointSize(11);
        label->setFont(font2);
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 70, 121, 20));
        label_2->setFont(font2);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 30, 141, 20));
        label_3->setFont(font2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        port_cb->setItemText(0, QCoreApplication::translate("MainWindow", "Select port", nullptr));

        baud_cb->setItemText(0, QCoreApplication::translate("MainWindow", "Select baudrate", nullptr));

        connect_butt->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        send_butt->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        clear_butt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        refresh_butt->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Code split frame", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Serial", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

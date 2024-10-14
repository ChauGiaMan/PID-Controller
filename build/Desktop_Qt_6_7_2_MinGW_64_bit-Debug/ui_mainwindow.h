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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *port_cb;
    QComboBox *baud_cb;
    QPushButton *connect_but;
    QPushButton *disconnect_but;
    QPushButton *send_but;
    QPushButton *refesh_but;
    QPushButton *position_but;
    QPushButton *velocity_but;
    QPushButton *run_but;
    QPushButton *clear_but;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *Kp_text;
    QTextEdit *Kd_text;
    QTextEdit *Ki_text;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *setPoint_text;
    QLabel *label_6;
    QTabWidget *Real_time;
    QWidget *Limit_tab;
    QWidget *Real_tab;
    QTextEdit *dataRead_text;
    QTextEdit *message_text;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1395, 779);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(124, 124, 124);\n"
"color: rgb(0, 0, 0);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        port_cb = new QComboBox(centralwidget);
        port_cb->setObjectName("port_cb");
        port_cb->setGeometry(QRect(140, 40, 161, 41));
        QFont font;
        font.setPointSize(11);
        port_cb->setFont(font);
        port_cb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        baud_cb = new QComboBox(centralwidget);
        baud_cb->setObjectName("baud_cb");
        baud_cb->setGeometry(QRect(140, 100, 161, 41));
        baud_cb->setFont(font);
        baud_cb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        connect_but = new QPushButton(centralwidget);
        connect_but->setObjectName("connect_but");
        connect_but->setGeometry(QRect(350, 40, 151, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        connect_but->setFont(font1);
        connect_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        disconnect_but = new QPushButton(centralwidget);
        disconnect_but->setObjectName("disconnect_but");
        disconnect_but->setGeometry(QRect(350, 100, 151, 41));
        disconnect_but->setFont(font1);
        disconnect_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"color: rgb(0, 0, 0);"));
        send_but = new QPushButton(centralwidget);
        send_but->setObjectName("send_but");
        send_but->setGeometry(QRect(530, 40, 161, 41));
        send_but->setFont(font1);
        send_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"color: rgb(0, 0, 0);"));
        refesh_but = new QPushButton(centralwidget);
        refesh_but->setObjectName("refesh_but");
        refesh_but->setGeometry(QRect(530, 100, 161, 41));
        refesh_but->setFont(font1);
        refesh_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"color: rgb(0, 0, 0);"));
        position_but = new QPushButton(centralwidget);
        position_but->setObjectName("position_but");
        position_but->setGeometry(QRect(1190, 40, 181, 71));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        position_but->setFont(font2);
        position_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        velocity_but = new QPushButton(centralwidget);
        velocity_but->setObjectName("velocity_but");
        velocity_but->setGeometry(QRect(1190, 130, 181, 71));
        velocity_but->setFont(font2);
        velocity_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 255);\n"
"color: rgb(0, 0, 0);"));
        run_but = new QPushButton(centralwidget);
        run_but->setObjectName("run_but");
        run_but->setGeometry(QRect(980, 40, 181, 71));
        run_but->setFont(font2);
        run_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"color: rgb(0, 0, 0);"));
        clear_but = new QPushButton(centralwidget);
        clear_but->setObjectName("clear_but");
        clear_but->setGeometry(QRect(980, 130, 181, 71));
        clear_but->setFont(font2);
        clear_but->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 101, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"gridline-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 91, 41));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Kp_text = new QTextEdit(centralwidget);
        Kp_text->setObjectName("Kp_text");
        Kp_text->setGeometry(QRect(770, 40, 171, 41));
        Kp_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Kd_text = new QTextEdit(centralwidget);
        Kd_text->setObjectName("Kd_text");
        Kd_text->setGeometry(QRect(770, 160, 171, 41));
        Kd_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Ki_text = new QTextEdit(centralwidget);
        Ki_text->setObjectName("Ki_text");
        Ki_text->setGeometry(QRect(770, 100, 171, 41));
        Ki_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(720, 40, 41, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(720, 110, 31, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(720, 170, 41, 20));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        setPoint_text = new QTextEdit(centralwidget);
        setPoint_text->setObjectName("setPoint_text");
        setPoint_text->setGeometry(QRect(440, 160, 251, 41));
        setPoint_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(350, 150, 91, 51));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        Real_time = new QTabWidget(centralwidget);
        Real_time->setObjectName("Real_time");
        Real_time->setGeometry(QRect(320, 210, 1051, 551));
        Real_time->setFont(font1);
        Real_time->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Limit_tab = new QWidget();
        Limit_tab->setObjectName("Limit_tab");
        Real_time->addTab(Limit_tab, QString());
        Real_tab = new QWidget();
        Real_tab->setObjectName("Real_tab");
        Real_time->addTab(Real_tab, QString());
        dataRead_text = new QTextEdit(centralwidget);
        dataRead_text->setObjectName("dataRead_text");
        dataRead_text->setGeometry(QRect(20, 230, 291, 241));
        dataRead_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        message_text = new QTextEdit(centralwidget);
        message_text->setObjectName("message_text");
        message_text->setGeometry(QRect(20, 510, 291, 251));
        message_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 190, 281, 31));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"gridline-color: rgb(0, 0, 0);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 470, 211, 31));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Real_time->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        connect_but->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect_but->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        send_but->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        refesh_but->setText(QCoreApplication::translate("MainWindow", "Refesh", nullptr));
        position_but->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        velocity_but->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        run_but->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        clear_but->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kp:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ki:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Kd:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Setpoint:", nullptr));
        Real_time->setTabText(Real_time->indexOf(Limit_tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        Real_time->setTabText(Real_time->indexOf(Real_tab), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Data read from STM32", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

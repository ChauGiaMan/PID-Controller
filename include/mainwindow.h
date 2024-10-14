#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QList>
#include <QIODevice>
#include <QMessageBox>
#include <QTextStream>
#include <QThread>
#include <QWidgetData>
#include <QString>
#include <QTextStream>
#include <QElapsedTimer>
#include <QTime>
#include <QTimer>
#include <QVector>
#include <QDateTime>
#include <QWidget>
#include <QTextEdit>
#include <qlineedit.h>
#include <QLineEdit>
#include <qelapsedtimer.h>
#include <QFile>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void txMessage();

    void showMess(const QString mess);

    void init_window();

    void receive_data_from_STM32();

    void on_clear_but_clicked();

    void on_connect_but_clicked();

    void on_position_but_clicked();

    void on_refesh_but_clicked();

    void on_run_but_clicked();

    void on_send_but_clicked();

    void on_velocity_but_clicked();

    void saveFile();

    void on_plot_but_clicked();

    void on_clearGraph_clicked();

    void on_saveGraph_clicked();

    void Graph();

    void plotResponse();

private:
    Ui::MainWindow *ui;
    QSerialPort *m_serial = nullptr ;
    int count;
    QElapsedTimer time;
    QTimer *timer;
    QTimer *timer_realTime;
    QSerialPortInfo *portInfo = nullptr  ;
    QList<double> timeBuff, resSysBuff,ctrlValBuff, dataPoints;
    QVector<double> dataPointsVector;
    QStringList values ;
    double value ;


};
#endif // MAINWINDOW_H

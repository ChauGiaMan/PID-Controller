#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QWidget"
#include "receive_frame.h"
#include <qcustomplot.h>
#include "stdint.h"
#include <cstdlib>
#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <QElapsedTimer>
#include <QTime>
#include <QTimer>
#include <QVector>
#include <QDateTime>
#include <QDebug>
#include <QString>
#include <QList>
#include <QIODevice>
#include "qlineedit.h"
#include <QLineEdit>
#include <qelapsedtimer.h>
#include <qtimer.h>


QByteArray data_read;
QString dataReadSendGraph;
QByteArray all_data;
QVector<double> setPointValue(10000);
QByteArray byteArray;
QByteArray frame_rx_fromSTM;
uint16_t frameBuffLenght;
uint8_t frameBuffer[PROTO_BUFF_SIZE_TX] = {0};
uint16_t rx_buff_size = 0;
uint8_t rx_buff[PROTO_DATA_SIZE_RX] = {0};
int8_t check_true;
uint8_t display1 = 1, counterPosi = 0, counterVelo = 0;
uint8_t display2 = 1;
uint8_t checkClear = 0, checkVelo = 0, checkPosi = 0;
uint8_t checkBtnPlot1 = 0;
uint8_t checkBtnPlot2 = 0;
uint8_t checkFirst = 0, checkContinue = 0;
uint32_t counterRealTime = 0;
float setPointPosi;
bool checkContRead = false, btnResetClick = false;
static int checkSizeDataVector, checkSizeValues;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_window();
    m_serial = new QSerialPort(this);
    connect(m_serial,SIGNAL(readyRead()), this, SLOT(receive_data_from_STM32()));

}
MainWindow::~MainWindow()
{
    delete ui;
    m_serial->close();
}

 void MainWindow::on_connect_but_clicked()
{

    m_serial->setPortName(ui->port_cb->currentText());
    //set Baudrate
    QString strBaud = ui->baud_cb->currentText();
    m_serial->setBaudRate(strBaud.toInt());
    //set Databits
    m_serial->setDataBits(QSerialPort::Data8);
    //set Stop bit
    m_serial->setStopBits(QSerialPort::OneStop);
    //set Parity
    m_serial->setParity(QSerialPort::NoParity);
    ui->connect_but->setText("Disconnect");
    ui->connect_but->setStyleSheet("QPushButton {color : red;}");
    ui->baud_cb->setDisabled(true);
    ui->port_cb->setDisabled(true);
    ui->send_but->setDisabled(false);
    if(m_serial->open(QIODevice::ReadWrite))
    {
        QMessageBox::information(this,"Result","Device is connected");
    }
    else
    {
        QMessageBox::critical(this,"Result","Device is disconnected ");
        ui->connect_but->setText("Connect");
        ui->connect_but->setStyleSheet("QPushButton {color : green;}");
        ui->port_cb->setDisabled(false);
        ui->baud_cb->setDisabled(false);
        ui->send_but->setDisabled(true);
    }
}



void MainWindow::on_position_but_clicked()
{

}
void MainWindow::on_refesh_but_clicked()
{
    QList<QSerialPortInfo> ports =  portInfo->availablePorts();
    QList<QString> strPorts;
    for (int i = 0; i <ports.size();i++)
    {
        strPorts.append(ports.at(i).portName());
    }
    ui->port_cb->addItems(strPorts);
}
void MainWindow::on_clear_but_clicked()
{
    saveFile();
    ui->message_text->clear();
    ui->dataRead_text->clear();
}


void MainWindow::on_run_but_clicked()
{
    if (ui->run_but->text() == "Run")
    {
        time.start();
        ctrlValBuff.append(0.0);
        timeBuff.append(0.0);
        resSysBuff.append(0.0);
        ui->run_but->setStyleSheet("QPushButton {color :red;");
        ui->run_but->setText("Stop");
    }
    else
    {
        time.elapsed();
        ctrlValBuff.clear();
        timeBuff.clear();
        resSysBuff.clear();
        ui->run_but->setStyleSheet("QPushButton {color : green;");
        ui->run_but->setText("Run");
        }
}
void MainWindow::on_send_but_clicked()
{
    float Kp = ui->Kp_txt->text().toFloat();//chuyển đổi các kí tự nhập trong ô Kp thành kiểu float
    float Ki = ui->Ki_txt->text().toFloat();
    float Kd = ui->Kd_txt->text().toFloat();
    float Setpoint =ui->Setpoint_txt->text().toFloat();
    char choose_PID = 0x11;
    byteArray.clear();
    byteArray.append(choose_PID);
    byteArray.append(reinterpret_cast<const char *>(&Kp), sizeof(Kp));// ép từ kiểu float sang char mà kh làm thay đổi giá trị vùng nhớ (reinterpret_cast)
    byteArray.append(reinterpret_cast<const char *>(&Ki), sizeof(Ki));
    byteArray.append(reinterpret_cast<const char *>(&Kd), sizeof(Kd));
    byteArray.append(reinterpret_cast<const char *>(&Setpoint), sizeof(Setpoint));
    SerialProto frame_call;
    frame_call.call_create_frameQt();
    QByteArray send_frame = QByteArray((char *)frameBuffer, frameBuffLenght);
    qDebug() << "send_frame tao frame thanh: " << send_frame;
    if (m_serial->isOpen())
    {
        m_serial->write(send_frame);
        ui->message_text->append("Kp: " + QString::number(Kp) + ", Ki: " + QString::number(Ki) + ", Kd: " + QString::number(Kd));
        qDebug() << "Send PID ok";
    }
    else
    {
        qDebug() << "Can't send PID";
        QMessageBox::warning(this, "Can't send PID", "Check your COM, it can't be open");
    }
}
void MainWindow::on_velocity_but_clicked()
{

}

void MainWindow::saveFile()
{
    QString fileName = "D:\\Design GUI\\DESIGN_GUI\\saveFile";
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        QString text = ui->dataRead_text->toPlainText();
        stream << text << Qt::endl;
        qDebug()<<1;
    }
    file.close();
}

void MainWindow::txMessage()
{

}
void MainWindow::receive_data_from_STM32()
{
    if ( m_serial->bytesAvailable())
    {
        qDebug() << " ";
    }
    else
    {
        qDebug() << "data not available";

    }
    if (m_serial->isOpen() /*&& (m_serial->bytesAvailable() >0) && checkContRead == true*/)
    {
         SerialProto call_get_data;
        data_read.clear();
         data_read = m_serial->readAll();
         call_get_data.call_get_dataFromSTM();
        // ui->message_text->append(data_read);
        //  QByteArray rx_data = QByteArray((char *)rx_buff,rx_buff_size);
        // ui->dataRead_text->append(rx_data);
         SerialProto frame_call;
         frame_call.call_create_frameQt();
         // QByteArray send_frame = QByteArray((char *)frameBuffer, frameBuffLenght);
        // m_serial->write(send_frame);
        if ((rx_buff[0] == 0x66) /*&& call_get_data.call_get_dataFromSTM() == rightt*/)
         {
            display1++;
            if (display1 == 2 || display1 == 200) // de cho no it hien cai nay thoi
            {
                ui->dataRead_text->append("----------------------");
                ui->dataRead_text->append("Position");
            }
           // if (checkClear != 1)
           // {
                float rx_buffToFloat = *((float *)(rx_buff + 1)); // do byte dau la chon graph vi tri hay van toc nen phai +1 de bo byte do
                ui->message_text->setTextColor(Qt::black);
                QString data = QString::number(rx_buffToFloat);
                QDateTime local_time(QDateTime::currentDateTime());
                QString local_timeToString = local_time.toString("yyyy-MM-dd HH:mm:ss.zzz");
                QString data_timenow = data + "   " + local_timeToString;
                ui->message_text->append(data_timenow);
                if (checkBtnPlot2 == 1)
                {
                    qDebug() << "checkBtnPlot2 la: " << checkBtnPlot2;
                    qDebug() << "size cua values 2 la: " << values.size();
                    while (values.size() >= 800)
                    {
                        values.removeFirst();
                        counterRealTime++;
                    }
                }
                values.append(data);
            }

        else if ((rx_buff[0] == 0x77) /*&& call_get_data.call_get_dataFromSTM() == rightt*/)
         {
             display2++;
             if (display2 == 2 || display2 == 200)
             {
                 ui->dataRead_text->append("----------------------");
                 ui->dataRead_text->append("Velocity");
             }
             //if (checkClear != 1)
             //{
                 float rx_buffToFloat = *((float *)(rx_buff + 1)); // do byte dau la chon graph vi tri hay van toc nen phai +1 de bo byte do
                 ui->message_text->setTextColor(Qt::black);
                 QString data = QString::number(rx_buffToFloat);
                 QDateTime local_time(QDateTime::currentDateTime());
                 QString local_timeToString = local_time.toString(/*"yyyy-MM-dd HH:mm:ss.zzz"*/);
                 QString data_timenow = data + "   " + local_timeToString;
                 ui->message_text->append(data_timenow);
                               //all_data.append(data + " ");
                 if (checkBtnPlot2 == 1)
                 {
                     qDebug() << "checkBtnPlot2 la: " << checkBtnPlot2;
                     qDebug() << "size cua values 2 la: " << values.size();
                     while (values.size() >= 400)
                     {
                         values.removeFirst();
                         counterRealTime++;
                     }
                 }
                 values.append(data);
             //}
         }
        else if (call_get_data.call_get_dataFromSTM() == false_CRC)
        {
            ui->message_text->append("Invalid CRC");
        }
        else if ((call_get_data.call_get_dataFromSTM() == buffer_small))
        {
            ui->message_text->append("Destination buffer too small");
        }
        else if ((call_get_data.call_get_dataFromSTM() == false_lenght_data))
        {
            ui->message_text->append("False lenght data");
        }
    }

  }

int8_t SerialProto::call_get_dataFromSTM()
{
    SerialProto get_data;
    check_true = get_data.serialGetData(reinterpret_cast<uint8_t *>(data_read.data()),
    data_read.size(), rx_buff, &rx_buff_size);
    return check_true;
}
void SerialProto::call_create_frameQt()
{
    SerialProto frame_data;
    for (int i = 0; i < sizeof(frameBuffer); i++)
    {
        frameBuffer[i] = 0x00;
    }
    frame_data.serialFrameData(reinterpret_cast<uint8_t *>(byteArray.data()), byteArray.length(), frameBuffer, &frameBuffLenght);
}
void MainWindow::Graph()
{
    if (checkVelo == 1)
    {
        ui->graph1->xAxis->setLabel("Size");
        ui->graph1->yAxis->setLabel("Velocity(RPM)");
    }
    if (checkPosi == 1)
    {
        ui->graph1->xAxis->setLabel("Size");
        ui->graph1->yAxis->setLabel("Position(degrees)");
    }
    static QVector<double> x;
    if (checkBtnPlot1 == 1)
     {
        checkBtnPlot2 = 0;
        checkContinue++;
        if (checkFirst == 0)
       {
            checkFirst = 1;

            for (int i = 0; i < values.size(); i++)
            {
                value = values[i].toDouble();
                dataPoints.append(value);
            }
            checkSizeValues = values.size();
            dataPointsVector = QVector<double>::fromList(dataPoints);
            x.resize(dataPointsVector.size());
            checkSizeDataVector = dataPointsVector.size();
            for (qint64 i = 0; i < dataPointsVector.size(); i++)
            {
                x[i] = i;
            }
        }
        if (checkContinue >= 2)
        {
            checkContinue = 2;
            for (int i = checkSizeValues; i < (values.size()); i++)
            {
                value = values[i].toDouble();
                dataPoints.append(value);
            }
            checkSizeValues = values.size();
            dataPointsVector = QVector<double>::fromList(dataPoints);
            x.resize(dataPointsVector.size());
            for (qint64 i = checkSizeDataVector; i < (dataPointsVector.size()); i++)
            {
                x[i] = i;
                if (dataPointsVector.size() > 1000)
                {
                    timer->stop();
                    checkContRead = false;
                    checkBtnPlot1 = 0;
                }
            }
            checkSizeDataVector = dataPointsVector.size();
        }
        ui->graph1->graph(0)->addData(x, dataPointsVector);
        //ui->graph1->graph(0)->setData(x, dataPointsVector);
        ui->graph1->rescaleAxes();
        ui->graph1->replot();
        ui->graph1->update();

    }
}
void MainWindow::showMess(const QString mess)
{
 ui->message_text->append(mess);
}
void MainWindow::init_window()
{
     setFixedSize(width(),height());
     setWindowTitle("GUI Design by GiaMan");
     ui->send_but->setDisabled(true);
     ui->port_cb->setCurrentIndex(0);
     ui->baud_cb->setCurrentIndex(0);

     ui->graph1->addGraph();
     ui->graph1->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
     ui->graph1->graph()->setLineStyle(QCPGraph::lsLine);
     ui->graph1->xAxis->setLabel("X");
     ui->graph1->yAxis->setLabel("Y");
     ui->graph1->xAxis->setRange(0,1000);
     ui->graph1->yAxis->setRange(0,1000);
     ui->graph1->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
     ui->graph1->graph()->setLineStyle(QCPGraph::lsLine);
     ui->graph1->graph()->setScatterStyle(QCPScatterStyle::ssDot);

    //Select the COM available
    QList<QSerialPortInfo> serialPortInfos = portInfo->availablePorts();
    QList<QString> Port;
    for(int i = 0 ; i < serialPortInfos.size();i++)
    {
        Port.append(serialPortInfos.at(i).portName());
    }
    ui->port_cb->addItems(Port);

    //Select a Baudrate available
    QList<qint32> baudRates  = portInfo->standardBaudRates();
    QList<QString> strBaudRates;
    for(int i =0 ; i <  baudRates.size();i++)
    {
        strBaudRates.append(QString::number(baudRates.at(i)));
    }
    ui->baud_cb->addItems(strBaudRates);   
}
void MainWindow::on_plot_but_clicked()
{
    checkClear = 0;
    checkBtnPlot1 = 1;
    timer = new QTimer(this);
    timer->setTimerType(Qt::CoarseTimer);
    connect(timer, SIGNAL(timeout()), this, SLOT(Graph()));
    timer->start(20);

}
void MainWindow::on_clearGraph_clicked()
{
    ui->graph1->graph(0)->data()->clear();//trỏ tới ô nhớ chứa dữ liệu của graph
    ui->graph1->replot();
    ui->graph1->update();
}
void MainWindow::on_saveGraph_clicked()
{

}
void MainWindow::plotResponse()
{
    ui->graph1->graph(0)->setData(timeBuff,resSysBuff);
    ui->graph1->rescaleAxes();
    ui->graph1->replot();
    ui->graph1->update();
}


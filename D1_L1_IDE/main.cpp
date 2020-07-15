#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QDebug>
#include <QDateTime>
#include <QTimer>
#include <QWidget>
#include "qlabelclock.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("暑假实习搬砖小组");
    w.resize(800,400);
//    w.setStyleSheet("background-Color:black");
    w.setStyleSheet("background-Color:white");

//    QLabel *labelTemperatureData = new QLabel(&w);
//    labelTemperatureData->setText("36.5");
//    labelTemperatureData->setStyleSheet("color: rgb(255,0,255);font-family: Microsoft YaHei; font-size: 60px");
//    labelTemperatureData->setGeometry(50,0,150,150);

//    QLabel *labelTempertureText = new QLabel(&w);
//    labelTempertureText->setText("T-");
//    labelTempertureText->setGeometry(0,50,50,50);
//    labelTempertureText->setStyleSheet("color:  rgb(255,0,255); font-family: Microsoft YaHei;font-size: 40px");


    QLabelClock *labelClock = new QLabelClock(&w);
//    labelClock->setGeometry(0,120,300,30);
    labelClock->setGeometry(0,0,800,400);
//    labelClock->setStyleSheet("color: white");
   labelClock->setStyleSheet("color:  black; font-family: Microsoft YaHei;font-size: 40px");

//    QLabel *sheshidu = new QLabel(&w);
//    sheshidu->setText("℃");
//    sheshidu->setStyleSheet(" color: rgb(255,0,255); font-family: Microsoft YaHei; font-size: 40px");
//    sheshidu->setGeometry(200,0,50,50);

    w.show();

    return a.exec();
}

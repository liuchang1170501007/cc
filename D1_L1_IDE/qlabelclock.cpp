#include "qlabelclock.h"
#include <QDateTime>
#include <QTimer>
#include <QMouseEvent>


QLabelClock::QLabelClock(QWidget *parent): QLabel(parent)
{
    this->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss zzz"));
    timer = new QTimer(parent);
    timer->start(1);
    //信号与槽
    connect(timer,&QTimer::timeout,this,&QLabelClock::refresh);
}
//事件
void QLabelClock::refresh()
{
    if(1==refreshEnable)
        //刷新文本
    this->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss zzz"));

}

void QLabelClock::mousePressEvent(QMouseEvent *ev)
{
    if(ev->buttons() == Qt::LeftButton)
    {
        if(this->refreshEnable)
           this->refreshEnable = 0;
        else
            this->refreshEnable = 1;

    }

}

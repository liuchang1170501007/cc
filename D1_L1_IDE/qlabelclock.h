#ifndef QLABELCLOCK_H
#define QLABELCLOCK_H

#include <QLabel>
#include <QWidget>


class QLabelClock : public QLabel
{
    Q_OBJECT
public:

    QTimer *timer;
    int refreshEnable = 1;                              //变量
    QLabelClock(QWidget *parent);
    void refresh();
protected:
    void mousePressEvent(QMouseEvent *ev);        //声明
};

#endif // QLABELCLOCK_H

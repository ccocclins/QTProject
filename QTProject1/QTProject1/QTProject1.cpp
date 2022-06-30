#include "QTProject1.h"

QTProject1::QTProject1(QWidget *parent): QMainWindow(parent)
{
    ui.setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint);             //取消显示窗口边框


    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect();

    shadow->setBlurRadius(40);                                //子窗体的阴影设置
    shadow->setColor(Qt::black);
    shadow->setOffset(0);

    ui.shadowWidget->setGraphicsEffect(shadow);

    this->setAttribute(Qt::WA_TranslucentBackground);         //主窗口设置为透明

}

QTProject1::~QTProject1()
{

}
 
//自定义鼠标移动功能
void QTProject1::mouseMoveEvent(QMouseEvent* event)
{
  QWidget::mouseMoveEvent(event);

  QPoint y = event->globalPos();

  QPoint x = y - this->z;

  this->move(x);
}

//自定义鼠标点击功能
void QTProject1::mousePressEvent(QMouseEvent* event)
{
  QWidget::mousePressEvent(event);

  //获取桌面到鼠标的距离、桌面到窗口的距离、窗口到鼠标的距离

  QPoint y = event->globalPos();

  QPoint x = this->geometry().topLeft();

  this->z = y - x;
}

//自定义鼠标释放功能
void QTProject1::mouseReleaseEvent(QMouseEvent* event)
{
  QWidget::mouseReleaseEvent(event);

  this->z = QPoint();
}

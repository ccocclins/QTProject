#include "QTProject1.h"

QTProject1::QTProject1(QWidget *parent): QMainWindow(parent)
{
    ui.setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint);             //ȡ����ʾ���ڱ߿�


    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect();

    shadow->setBlurRadius(40);                                //�Ӵ������Ӱ����
    shadow->setColor(Qt::black);
    shadow->setOffset(0);

    ui.shadowWidget->setGraphicsEffect(shadow);

    this->setAttribute(Qt::WA_TranslucentBackground);         //����������Ϊ͸��

}

QTProject1::~QTProject1()
{

}
 
//�Զ�������ƶ�����
void QTProject1::mouseMoveEvent(QMouseEvent* event)
{
  QWidget::mouseMoveEvent(event);

  QPoint y = event->globalPos();

  QPoint x = y - this->z;

  this->move(x);
}

//�Զ������������
void QTProject1::mousePressEvent(QMouseEvent* event)
{
  QWidget::mousePressEvent(event);

  //��ȡ���浽���ľ��롢���浽���ڵľ��롢���ڵ����ľ���

  QPoint y = event->globalPos();

  QPoint x = this->geometry().topLeft();

  this->z = y - x;
}

//�Զ�������ͷŹ���
void QTProject1::mouseReleaseEvent(QMouseEvent* event)
{
  QWidget::mouseReleaseEvent(event);

  this->z = QPoint();
}

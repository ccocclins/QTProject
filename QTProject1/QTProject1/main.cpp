#include "QTProject1.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);       //QT�������

  QTProject1 w;                     //ʵ��������
  w.show();

  return a.exec();                  //����ѭ��
}

#include "QTProject1.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);       //QT程序入口

  QTProject1 w;                     //实例化对象
  w.show();

  return a.exec();                  //程序循环
}

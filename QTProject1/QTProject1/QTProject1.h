#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTProject1.h"

class QTProject1 : public QMainWindow
{
  Q_OBJECT

public:
  QTProject1(QWidget* parent = nullptr);
  ~QTProject1();

private:
  Ui::QTProject1Class ui;
};

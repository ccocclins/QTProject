#pragma once

#include <QtWidgets/QMainWindow>
#include <qgraphicseffect.h>
#include <QMouseEvent>
#include <QPoint>
#include "ui_QTProject1.h"

class QTProject1 : public QMainWindow
{
  Q_OBJECT

public:
  QTProject1(QWidget* parent = nullptr);
  ~QTProject1();

  virtual void mouseMoveEvent(QMouseEvent* event);

  virtual void mousePressEvent(QMouseEvent* event);

  virtual void mouseReleaseEvent(QMouseEvent* event);

private:
  Ui::QTProject1Class ui;

  QPoint z;
};

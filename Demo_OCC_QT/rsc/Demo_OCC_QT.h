#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Demo_OCC_QT.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Demo_OCC_QTClass; };
QT_END_NAMESPACE

class Demo_OCC_QT : public QMainWindow
{
    Q_OBJECT

public:
    Demo_OCC_QT(QWidget *parent = nullptr);
    ~Demo_OCC_QT();

private:
    Ui::Demo_OCC_QTClass *ui;
};

#include "Demo_OCC_QT.h"

Demo_OCC_QT::Demo_OCC_QT(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Demo_OCC_QTClass())
{
    ui->setupUi(this);
}

Demo_OCC_QT::~Demo_OCC_QT()
{
    delete ui;
}

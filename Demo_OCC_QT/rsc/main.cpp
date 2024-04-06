#include "Demo_OCC_QT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Demo_OCC_QT w;
    w.show();
    return a.exec();
}

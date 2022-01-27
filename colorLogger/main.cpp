#include "colorlogger.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    colorLogger w;
    w.show();
    return a.exec();
}

#include "topmodule.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    topModule w;
    w.show();

    return a.exec();
}

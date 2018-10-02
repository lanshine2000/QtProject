#include "calculatorui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorUI w;
    w.show();

    return a.exec();
}

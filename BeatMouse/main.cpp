﻿#include "mainwindow.h"
#include <QApplication>
#include<stdlib.h>//随机数种子所在的头文件
#include<time.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand((unsigned)time(NULL));//默认情况下随机种子来自系统时钟
    MainWindow w;
    w.show();
    return a.exec();
}

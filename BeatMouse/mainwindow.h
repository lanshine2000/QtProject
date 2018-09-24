#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QCloseEvent>//包含进事件所属的头文件

#include <QMainWindow>
#include"myscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void updateScore();
protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    myScene* scene;//定义场景指针对象
    int score;
};

#endif // MAINWINDOW_H

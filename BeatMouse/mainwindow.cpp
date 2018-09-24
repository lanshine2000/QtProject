#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<handler.h>//通过handler发射信号包含进来头文件

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new myScene(this);
    this->ui->graphicsView->setScene(scene);//在容器内设置场景

    //开始按钮的设置
    connect(ui->btn_start,&QPushButton::clicked,this->scene,&myScene::startGame);
    connect(ui->btn_pause,&QPushButton::clicked,this->scene,&myScene::pauseGame);
    connect(ui->btn_end,&QPushButton::clicked,this->scene,&myScene::stopGame);
    this->score = 0;//初始化为0
    handler* hand = handler::getInstance(); //这一行代码是获取实例的意思,就是通过getInstance()函数获取hand对象
    connect(hand,&handler::beatMouse,this,&MainWindow::updateScore);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateScore()
{
    this->score+=10;//每打一次加10分
    this->ui->lcdNumber->display(this->score);//将打老鼠的次数显示在数码管上
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int res = QMessageBox::question(this,"确定","你真的要关闭吗","是","否");
    if(res==1){
        event->ignore();//如果按否,则忽略
    }

}

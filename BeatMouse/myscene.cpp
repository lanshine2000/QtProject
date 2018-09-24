#include "myscene.h"
#include<stdlib.h>
myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    for(int i = 0;i<16;i++)
    {
        this->item[i] = new myitem;//设置16张背景图
        this->item[i]->setPos(i/4 * this->item[i]->boundingRect().width(),
                              i%4 * this->item[i]->boundingRect().height());
        this->addItem(this->item[i]);
    }

    //this->item[4]->setPic(":/mouse/mouse.png");
    this->ptimer = new QTimer;
    connect(this->ptimer,&QTimer::timeout,this,&myScene::showMouse);
    //this->ptimer->start(1000);
}

void myScene::showMouse()
{
    //随机一个数字 0-15,使用C语言的设置
    int count = rand()%3+1; //(1~3个)
    //每次重置背景
       for(int i = 0; i < 16; i++){
      this->item[i]->setPic(":/background/bg1.png");
           this->item[i]->setMouse(false);//使得鼠标点击背景为假
        }

    //随机出现地鼠图片
    for(int i = 0; i < count; i++){
        int index = rand()%16;
        this->item[index]->setPic(":/mouse/mouse.png");
        this->item[index]->setMouse(true);//使得鼠标点击老鼠为真
    }
}

void myScene::startGame()
{
    this->ptimer->start(800);
    for(int i=0; i<16; i++){
        this->item[i]->setStart(true);
    }
}
void myScene::pauseGame()
{
    this->ptimer->stop();
    for(int i=0; i<16; i++){
        this->item[i]->setStart(false);
    }
}
void myScene::stopGame()
{
     this->ptimer->stop();
    //每次重置背景初始化
       for(int i = 0; i < 16; i++){
      this->item[i]->setPic(":/background/bg1.png");}
       for(int i=0; i<16; i++){
           this->item[i]->setStart(false);
       }
}

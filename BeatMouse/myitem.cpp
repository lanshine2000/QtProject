#include "myitem.h"
#include<QPixmap>
#include<QDebug>
#include"handler.h"
#include<QCursor>
myitem::myitem()
{
    this->setPixmap(QPixmap(":/background/bg1.png"));
    this->m_nouse = false;
    this->m_start = false;

}


 void myitem::setPic(QString path)
{
    this->setPixmap(QPixmap(path));
}

 void myitem::setMouse(bool mouse)
{
    this->m_nouse = mouse;
}

 bool myitem::isMouse()
{
    return this->m_nouse;
}

 void myitem::setStart(bool start)
{
    this->m_start = start;

}

 bool myitem::isStart()
{
    return this->m_start;

}

void myitem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
  if(this->isStart()){
      handler* hand = handler::getInstance();
      if(this->isMouse()){
          hand->addScore();
          this->setPixmap(QPixmap(":/mouse/beatmouse.png"));//改变打老鼠后背景图片
          this->m_nouse = false;//只能敲一下加分
      }
  }
  this->setCursor(QCursor(QPixmap(":/mouse/picturedown.png")));

}

void myitem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
     this->setCursor(QCursor(QPixmap(":/mouse/pictureUp.png")));

}

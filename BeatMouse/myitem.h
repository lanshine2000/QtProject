#ifndef MYITEM_H
#define MYITEM_H
#include<QGraphicsPixmapItem>
#include<QString>
#include<QGraphicsSceneMouseEvent>
#include<QCursor>

class myitem : public QGraphicsPixmapItem
{
public:
    myitem();
    void setPic(QString path); //设置涉及到的图片的路径
    void setMouse(bool mouse);
    bool isMouse();
    void setStart(bool start);
    bool isStart();//返回开始的状态
private:
    bool m_nouse;
    bool m_start;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

};

#endif // MYITEM_H

#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include<QGraphicsScene>
#include"myitem.h"//包含进来myitem
#include<QTimer>

class myScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myScene(QObject *parent = nullptr);

    void showMouse();//槽函数
    void startGame();//公开槽函数
    void pauseGame();
    void stopGame();


signals:
private:
//    myitem* item;//定义myitem指针对象
//     myitem* item2;
    myitem* item[16];//声明一个指针数组

    QTimer* ptimer;//计时器指针
public slots:
};

#endif // MYSCENE_H

#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>

class handler : public QObject
{
    Q_OBJECT
public:
    //静态不用实例化就可以之间调用
    static handler* getInstance();//只能获得一个对象实现单例模式
    void addScore();
private://改成private的目的是在类外不能新建对象实现数据的封闭
    explicit handler(QObject *parent = nullptr);

signals:
    void beatMouse();//人为发送信号,函数声明
private:
    static handler* hand;

public slots:
};

#endif // HANDLER_H

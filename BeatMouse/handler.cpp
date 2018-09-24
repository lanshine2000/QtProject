#include "handler.h"



handler::handler(QObject *parent) : QObject(parent)
{

}

handler* handler::hand = new handler;//静态成员变量的初始化方式

handler *handler::getInstance()
{
    return hand;//具有全局变量的特性
}

void handler::addScore()
{
    emit beatMouse();
}

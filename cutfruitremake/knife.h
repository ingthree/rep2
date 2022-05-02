#ifndef KNIFE_H
#define KNIFE_H


#include <QPoint>
#include <QPixmap>
class Knife
{
public:
    //void setPosition(int x,int y);
    Knife();
    QPixmap myKnife;
    int x;
    int y;
    int life;
    int recored;
    bool isPlayed;

};
#endif // KNIFE_H

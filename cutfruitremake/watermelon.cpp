#include "watermelon.h"

Watermelon::Watermelon()
{
    watermelon.load(":/image/resource/sandia.png");
    x=rand()%2*(600-watermelon.width());
    y = 0;
    isFree=true;
    isDestroyed = false;
    isMissed=false;
    speed = 0.8;
    isReverse=0;
//    bomb.Bomb::getFruit('w');
//    bomb.intitial();
}

void Watermelon::updatePosition(){
    if(!isFree)
    {
        if(isReverse==0)
        {
            x+=0.8;
            y+=0.004*x-1.2;
        }
        else
        {
            x-=0.8;
            y+=0.004*(600-x)-1.2;
        }
    }
    if(y>600||x>600||x<0||y<0)
    {
        isFree = true;
        isMissed=true;
    }

}



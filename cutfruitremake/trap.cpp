#include "trap.h"

Trap::Trap()
{
    trap.load(":/image/resource/boom.png");
    x = 0;
    y = 0;
    isDestroyed = false;
    speed = 1;
    isFree=true;
    isReverse=0;
//   bomb.getFruit('t');
//   bomb.intitial();
}

void Trap::updatePosition(){
    if(!isFree)
    {
        if(isReverse==0)
        {
            x+=1;
            y+=0.004*x-1.2;
        }
        else
        {
            x-=1;
            y+=0.004*(600-x)-1.2;
        }
    }
    if(y>600||x>600||x<0)
        isFree = true;
}

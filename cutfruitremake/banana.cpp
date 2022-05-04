#include "banana.h"

Banana::Banana()
{
    banana.load(":/image/resource/peach.png");
    x=rand()%2*(600-banana.width());
    y = 0;
//    bomb.Bomb::getFruit('b');
//    bomb.intitial();
    isFree=true;
    isMissed =false;
    isDestroyed = false;
    speed = 0;
    isReverse=0;
}

void Banana::updatePosition(){
    if(!isFree)
    {
        if(isReverse==0)
        {
            x+=1.1;
            y+=0.004*x-1.2;
        }
        else
        {
            x-=1.1;
            y+=0.004*(600-x)-1.2;
        }
    }
    if(y>600||x>600||x<0||y<0)
    {
        isFree = true;
        isMissed =true;
    }

}

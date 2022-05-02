#include "bomb.h"

Bomb::Bomb()
{
    recored = 0;
    index = 0;
    x = 0;
    y = 0;
    isPlayde = false;
}

void Bomb::intitial()
{
     if(fruitname=='t')
    {
        for(int i=0;i<6;i++)
        {
        QString str = QString(BOMB_PATH).arg(i);
        bombPix.push_back(str);
        }
    }
}
void Bomb::getFruit(char f)
{
    fruitname=f;
}

void Bomb::updateInfo(){
    recored++;
    if(recored<20)
        return;
    recored = 0;
    index++;
    isPlayde = true;
}


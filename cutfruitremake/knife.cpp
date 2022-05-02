#include "knife.h"

#include <cstdlib>
#include <iostream>
#include <fstream>

Knife::Knife()
{
    life=3;
    myKnife.load(":/image/resource/knife_50x50.png");
    x = (650-myKnife.width())*0.5;
    y = 600-myKnife.height();
    recored = 0;
    isPlayed = false;
}

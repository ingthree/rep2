#ifndef BANANA_H
#define BANANA_H
#include <QPixmap>
#include "bomb.h"


class Banana
{
public:
    Bomb bomb;
    Banana();
    float x;
    float y;
    float speed;
    bool isReverse;
    bool isFree;
    bool isDestroyed;
    bool isMissed;
    QPixmap banana;
    void updatePosition();
};

#endif // BANANA_H

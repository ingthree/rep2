#ifndef APPLE_H
#define APPLE_H
#include <QPixmap>
#include "bomb.h"


class Apple
{
public:
    Bomb bomb;
    Apple();
    float x;
    float y;
    float speed;
    bool isReverse;
    bool isFree;
    bool isDestroyed;
    bool isMissed;
    QPixmap apple;
    void updatePosition();
};
#endif // APPLE_H

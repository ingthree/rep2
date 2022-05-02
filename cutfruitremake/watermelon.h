#ifndef WATERMELON_H
#define WATERMELON_H
#include <QPixmap>
#include "bomb.h"

class Watermelon
{
public:
    Bomb bomb;
    Watermelon();
    float x;
    float y;
    bool isFree;
    float speed;
    bool isDestroyed;
    bool isMissed;
    bool isReverse;
    QPixmap watermelon;
    void updatePosition();
};

#endif // WATERMELON_H

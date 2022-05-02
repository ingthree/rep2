#ifndef TRAP_H
#define TRAP_H
#include <QPixmap>
#include "bomb.h"

class Trap
{
public:
    Bomb bomb;
    Trap();
    float x;
    float y;
    float speed;
    bool isDestroyed;
    bool isFree;
    bool isReverse;
    QPixmap trap;
    void updatePosition();
};

#endif // TRAP_H

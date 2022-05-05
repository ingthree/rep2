#ifndef BOMB_H
#define BOMB_H
#define BOMB_PATH ":/image/resource/bomb-%1.png"
#define WMBOMB_PATH ":/image/resource/sandia-1.png"
#define BNBOMB_PATH ":/image/resource/banana-1.png.png"
#define BOMBSOUND_PATH ":/image/resource/474.wav"
#include <QPaintEvent>
#include <QPixmap>
#include <QVector>
#include <QString>
#include <QSound>
class Bomb
{
public:
    Bomb();
    void updateInfo();
    int x;
    int y;
    QVector<QPixmap> bombPix;
    int recored;
    int index;
    bool isPlayde;
};
#endif // BOMB_H

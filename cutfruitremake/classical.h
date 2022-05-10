#ifndef CLASSICAL_H
#define CLASSICAL_H

#include <QWidget>
#include <QTimer>
#include <QWidget>
#include <knife.h>
#include <QPainter>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QTimer>
#include <QMouseEvent>
#include <banana.h>
#include <apple.h>
#include <trap.h>
#include <watermelon.h>
#include <QLabel>
#include <endgame.h>
#include <QSound>
#define FDSOUND ":/image/resource/478145__aris621__nasty-knife-stab-2.wav"
#define SCORE "Score: %1"
#define LIFE  "Life:  %1"


class Classical : public QWidget
{
    Q_OBJECT
public:
    bool win;
    bool winPlayed;
    int Score;
    QSound* Player;
    QLabel* score;
    QLabel* life;
    Knife myKnife;
    QTimer Timer;
    Banana banana[20];
    Watermelon watermelon[20];
    Apple apple[20];
    int fruitRecorded;
    Trap trap[5];
    void initial();
    void startGame();
    void endGame();
    void updatePositino();
    void paintEvent(QPaintEvent *E);
    void mouseMoveEvent(QMouseEvent *E);
    void FruitShow();
    void GameWin();
    void collisionDetetion();
    int getDistanceBAK(Banana B,Knife K);
    int getDistanceWAK(Watermelon W,Knife K);
    int getDistanceTAK(Trap T,Knife K);
    int getDistanceAAK(Apple A,Knife K);
    explicit Classical(QWidget *parent = nullptr);
    ~Classical();

};

#endif // CLASSICAL_H

#ifndef ENDGAME_H
#define ENDGAME_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <classical.h>

class EndGame : public QWidget
{
    Q_OBJECT

public:
    explicit EndGame(QWidget *parent = 0);
    QPushButton *Again;
    QLabel *Score;
    QLabel *Lose;
    EndGame(int x);
    ~EndGame();
public slots:
    void ReturnClicked();
    void AgainClicked();
};

#endif // ENDGAME_H

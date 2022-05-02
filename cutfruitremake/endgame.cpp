#include "endgame.h"
#include <QVBoxLayout>
EndGame::EndGame(QWidget *parent) :
    QWidget(parent)
{

}

EndGame::EndGame(int x){
    resize(100,100);
    Again = new QPushButton("Again");
    Score = new QLabel(this);
    Score->setText(QString(SCORE).arg(x));
    Lose = new QLabel(this);
    Lose->setText("YOU LOSE");
    Again->setFont(QFont("Algerian",18));
    Again->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");
    Score->setFont(QFont("Algerian",18));
    Score->setStyleSheet("QLabel{background: transparent; color:white; }"
                                );
    Lose->setFont(QFont("Algerian",18));
    Lose->setStyleSheet("QLabel{background: transparent; color:white; }"
                                );

    QVBoxLayout *lay = new QVBoxLayout;
    lay->addWidget(Lose);
    lay->addWidget(Score);
    lay->addWidget(Again);

    setLayout(lay);

    setAutoFillBackground(true);
    QPalette pal;
    QPixmap pixmap(":/image/images/background.png");
    pal.setBrush(QPalette::Background, QBrush(pixmap));;
    setPalette(pal);

    connect(Again,&QPushButton::clicked,this,&EndGame::AgainClicked);
}

EndGame::~EndGame()
{

}


void EndGame::AgainClicked(){
    Classical *e = new Classical;
    e->show();
    this->close();
}

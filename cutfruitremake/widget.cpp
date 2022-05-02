#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPalette>
#include <QBrush>
#include <classical.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    resize(500,600);
    startGame = new QPushButton("Start Game");
    startGame->setFont(QFont("Algerian",18));
    startGame->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");

    Help = new QPushButton("Help");
    Help->setFont(QFont("Algerian",18));
    Help->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");

    quit = new QPushButton("Quit");
    quit->setFont(QFont("Algerian",18));
    quit->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");

    label = new QLabel(this);
    label->setText("Fruit Ninja");
    label->setFont(QFont("Algerian",18));
    label->setStyleSheet("QLabel{background:transparent;color:white;}");

    QVBoxLayout* lay = new QVBoxLayout;
    lay->addWidget(label);
    lay->addWidget(startGame);
    lay->addWidget(Help);
    lay->addWidget(quit);
    setLayout(lay);

    setAutoFillBackground(true);
    QPalette pal;
    QPixmap pixmap(":/image/resource/background.png");
    pal.setBrush(QPalette::Background, QBrush(pixmap));;
    setPalette(pal);

    connect(startGame,&QPushButton::clicked,this,&Widget::startClick);
    connect(quit,&QPushButton::clicked,this,&Widget::quitClick);
    connect(Help,&QPushButton::clicked,this,&Widget::HelpClick);
}
void Widget::startClick(){
    Classical *E=new Classical;
    E->show();
    this->close();
}
void Widget::quitClick(){
    this->close();
}

void Widget::HelpClick(){

}
Widget::~Widget()
{
    delete ui;
}



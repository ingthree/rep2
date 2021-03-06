#include "choose.h"
#include <QPixmap>
#include <QGridLayout>
Choose::Choose()
{
    setAttribute(Qt::WA_DeleteOnClose,true);
    resize(800,600);
    setWindowTitle("Choose");
    classical = new QPushButton("1");
    classical2 = new QPushButton("2");

    Quit = new QPushButton("Quit");

    Quit->setFont(QFont("Algerian",24));
    Quit->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");

    classical->setFont(QFont("Algerian",24));
    classical->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");
    classical2->setFont(QFont("Algerian",24));
    classical2->setStyleSheet("QPushButton{background: transparent; color:white; }"
                                "QPushButton:hover{color:red;}");
    label1 = new QLabel(this);

    label1->setFont(QFont("Algerian",24));
    label1->setStyleSheet("QLabel{background: transparent; color:white; }"
                                );

    label1->setText("Classical:");

    Recored = new QPushButton("Recored");
    Recored->setGeometry(20,20,450,100);
    QHBoxLayout* lay1 = new QHBoxLayout;
    lay1->addWidget(classical);
    lay1->addWidget(classical2);


    QGridLayout *mainlay = new QGridLayout;
    mainlay->addWidget(label1,0,0);
    mainlay->addLayout(lay1,1,0);;
    mainlay->addWidget(Quit,3,1);

    setLayout(mainlay);

    setAutoFillBackground(true);
    QPalette pal;
    QPixmap pixmap(":/image/resource/7af1e0431941caa6bc0357c050319cec.png");
    pixmap=pixmap.scaled(800,600);
    pal.setBrush(QPalette::Background, QBrush(pixmap));;
    setPalette(pal);


    connect(classical,&QPushButton::clicked,this,&Choose::ClassicalClicked);
    connect(classical2,&QPushButton::clicked,this,&Choose::Classical2Clicked);
    connect(Quit,&QPushButton::clicked,this,&Choose::QuitClicked);

    QSound *startsound=new QSound(":/image/resource/3619.wav",this);
    startsound->play();  //播放
    startsound->setLoops(-1);//循环次数，-1代表一直循环
}

void Choose::ClassicalClicked(){
    Classical *e = new Classical;
    e->show();
    this->close();
}


void Choose::Classical2Clicked(){
    Classical2 *e = new Classical2;
    e->show();
    this->close();
}


void Choose::QuitClicked(){
    this->close();
}

Choose::~Choose(){
}

#include "helpwidget.h"
#include <QVBoxLayout>

HelpWidget::HelpWidget(QWidget *parent) :
    QWidget(parent)

{
    setAutoFillBackground(true);
    QPalette pal;
    QPixmap pixmap(":/image/resource/background.png");
    pal.setBrush(QPalette::Background, QBrush(pixmap));;
    setPalette(pal);

    Label1 = new QLabel(this);
    Label1->setFont(QFont("Algerian",18));
    Label1->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label2 = new QLabel(this);
    Label2->setFont(QFont("Algerian",18));
    Label2->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label3 = new QLabel(this);
    Label3->setFont(QFont("Algerian",18));
    Label3->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label4 = new QLabel(this);
    Label4->setFont(QFont("Algerian",18));
    Label4->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label5 = new QLabel(this);
    Label5->setFont(QFont("Algerian",18));
    Label5->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label6 = new QLabel(this);
    Label6->setFont(QFont("Algerian",18));
    Label6->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label7 = new QLabel(this);
    Label7->setFont(QFont("Algerian",18));
    Label7->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label8 = new QLabel(this);
    Label8->setFont(QFont("Algerian",18));
    Label8->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label9 = new QLabel(this);
    Label9->setFont(QFont("Algerian",18));
    Label9->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label10 = new QLabel(this);
    Label10->setFont(QFont("Algerian",18));
    Label10->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label11 = new QLabel(this);
    Label11->setFont(QFont("Algerian",18));
    Label11->setStyleSheet("QLabel{background:transparent;color:white;}");

    Label1->setText("本游戏为水果忍者游戏的模仿尝试");
    Label2->setText("在游戏中，你可以通过鼠标拖拽来代替手指，从而移动刀片");
    Label3->setText("同样的 切到水果会增加分数，但遗漏或切到炸弹将会让生命值减少");
    Label4->setText("关卡分为一二两关 难度第二关略高");
    Label5->setText("祝你好运！");
    Label6->setText("");
    Label7->setText("     ");
    Label8->setText("");
    Label9->setText( "");
    Label10->setText("");
    Label11->setText("");

    QVBoxLayout *lay = new QVBoxLayout;
    lay->addWidget(Label1);
    lay->addWidget(Label2);
    lay->addWidget(Label3);
    lay->addWidget(Label4);
    lay->addWidget(Label5);
    lay->addWidget(Label6);
    lay->addWidget(Label7);
    lay->addWidget(Label8);
    lay->addWidget(Label9);
    lay->addWidget(Label10);
    lay->addWidget(Label11);

    setLayout(lay);
}

HelpWidget::~HelpWidget()
{
}

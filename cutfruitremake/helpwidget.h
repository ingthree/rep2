#ifndef HELPWIDGET_H
#define HELPWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QPalette>

class HelpWidget : public QWidget
{
    Q_OBJECT
    QLabel *Label1;
    QLabel *Label2;
    QLabel *Label3;
    QLabel *Label4;
    QLabel *Label5;
    QLabel *Label6;
    QLabel *Label7;
    QLabel *Label8;
    QLabel *Label9;
    QLabel *Label10;
    QLabel *Label11;

public:
    explicit HelpWidget(QWidget *parent = 0);
    ~HelpWidget();
};

#endif // HELPWIDGET_H

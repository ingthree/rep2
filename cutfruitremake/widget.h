#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QPainter>
#include <QPixmap>
#include <QImage>
#include <Qpaintevent>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QPushButton *startGame;
    QPushButton *quit;
    QImage* background;
    QLabel* label;
    QPushButton* Help;
    //paintEvent(QPaintEvent *event);
public slots:
    void startClick();
    void quitClick();
    void HelpClick();
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

#ifndef CHOOSE_H
#define CHOOSE_H
#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include "widget.h"
#include "classical.h"
#include "classical2.h"

class Choose: public QWidget
{
    Q_OBJECT
public:
    Choose();
    QPushButton* classical;
    QPushButton* classical2;
    QLabel *label1;
    QLabel *label2;
    QPushButton *Recored;
    QPushButton *Quit;
    ~Choose();
public slots:
    void ClassicalClicked();
    void Classical2Clicked();
    void QuitClicked();
};

#endif // CHOOSE_H

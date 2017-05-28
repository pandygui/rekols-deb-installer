#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <dbasebutton.h>
#include <dlabel.h>

DWIDGET_USE_NAMESPACE

class HomePage : public QWidget
{
public:
    HomePage(QWidget *parnet = 0);

    QVBoxLayout *layout;
    DBaseButton *selectButton;
    DLabel *label;
};

#endif // HOMEPAGE_H

#ifndef INSTALLPAGE_H
#define INSTALLPAGE_H

#include <QWidget>
#include <QVBoxLayout>

class InstallPage : public QWidget
{
public:
    InstallPage(QWidget *parent = 0);

    QString path;

private:
    QVBoxLayout *layout;
};

#endif // INSTALLPAGE_H

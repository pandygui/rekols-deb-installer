#ifndef INSTALLPAGE_H
#define INSTALLPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <dlabel.h>
#include <dbasebutton.h>
#include <QProcess>

DWIDGET_USE_NAMESPACE

class InfoPage : public QWidget
{
public:
    InfoPage(QWidget *parnet = 0);

    QVBoxLayout *layout;
    DLabel *packageName;
    DLabel *versionName;
    DBaseButton *installButton;

    void getPath(QString & m_path);
    void start();

private:
    QString path;
    QProcess *process;
};

#endif // INSTALLPAGE_H

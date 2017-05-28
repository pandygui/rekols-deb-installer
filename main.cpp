#include "main_window.h"
#include <DApplication>
#include <dutility.h>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication a(argc, argv);
    a.setTheme("light");

    MainWindow w;
    w.setFixedSize(300, 350);
    w.show();

    DUtility::moveToCenter(&w);

    return a.exec();
}

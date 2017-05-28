#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <DMainWindow>
#include "home_page.h"
#include "info_page.h"
#include "install_page.h"

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void showHomePage();
    void showInstallPage();

    QWidget *centWidget;
    HomePage *homePage;
    InfoPage *infoPage;

private slots:
    void openFile();
};

#endif // MAIN_WINDOW_H

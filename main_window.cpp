#include "main_window.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    centWidget = new QWidget();
    homePage = new HomePage();
    infoPage = new InfoPage();

    this->setCentralWidget(centWidget);

    showHomePage();
}

void MainWindow::showHomePage()
{
    qDeleteAll(centWidget->children());
    centWidget->setLayout(homePage->layout);

    connect(homePage->selectButton, SIGNAL(clicked()), this, SLOT(openFile()));
}

void MainWindow::showInstallPage()
{
    qDeleteAll(centWidget->children());
    centWidget->setLayout(infoPage->layout);
}

void MainWindow::openFile()
{
    QString debPath = QFileDialog::getOpenFileName(this, "Open deb", ".", "*.deb");

    if (debPath.isEmpty())
        return;

    showInstallPage();
    infoPage->getPath(debPath);
    infoPage->start();
}

MainWindow::~MainWindow()
{

}

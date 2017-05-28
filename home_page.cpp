#include "home_page.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout();
    selectButton = new DBaseButton("选择安装包");
    label = new DLabel("或者拖动安装包到此窗口");

    layout->addStretch();
    layout->addWidget(selectButton, 0, Qt::AlignCenter);
    layout->addWidget(label, 0, Qt::AlignCenter);
    layout->addStretch();

    selectButton->setFixedSize(150, 50);
}

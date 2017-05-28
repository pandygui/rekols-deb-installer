#include "info_page.h"
#include <QDebug>

InfoPage::InfoPage(QWidget *parnet)
    : QWidget(parnet)
{
    layout = new QVBoxLayout();
    packageName = new DLabel();
    versionName = new DLabel();
    installButton = new DBaseButton("安装");

    layout->addWidget(packageName, 0, Qt::AlignLeft);
    layout->addWidget(versionName, 0, Qt::AlignLeft);
    layout->addWidget(installButton, 10, Qt::AlignCenter);

    installButton->setFixedHeight(50);
    installButton->setFixedWidth(150);
}

void InfoPage::getPath(QString & m_path)
{
    path = m_path;
}

void InfoPage::start()
{
    process = new QProcess(this);

    process->start(QString("dpkg --info %1").arg(path));
    process->waitForReadyRead();
    process->waitForFinished();

    QString m_result = process->readAll();
    QString m_name;
    QString m_version;

    for (int i = m_result.indexOf("Package: "); i < m_result.length(); ++i)
    {
        if (m_result[i] == '\n')
            break;

        m_name.append(m_result[i]);
    }

    for (int i = m_result.indexOf("Version: "); i < m_result.length(); ++i)
    {
        if (m_result[i] == '\n')
            break;

        m_version.append(m_result[i]);
    }


    packageName->setText(m_name);
    versionName->setText(m_version);
}

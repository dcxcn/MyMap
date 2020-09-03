#include "aboutdialog.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>


AboutDialog::AboutDialog(QWidget* parent)
    : QDialog(parent)
{
    this->setWindowTitle("About MyMap");
    this->setAttribute(Qt::WA_DeleteOnClose, true);

    setupLayout();
    this->setFixedSize(0, 0);
}

void AboutDialog::setupLayout() {
    // Left: Icons
    QLabel* labelAppIcon = new QLabel(this);
    labelAppIcon->setFixedSize(64, 64);
    labelAppIcon->setPixmap(QPixmap("res/icons/app_64x64.ico"));

    QLabel* labelDeveloperIcon = new QLabel(this);
    labelDeveloperIcon->setFixedSize(64, 64);
    labelDeveloperIcon->setPixmap(QPixmap("res/icons/developer_64x64.png"));

    QVBoxLayout* iconLayout = new QVBoxLayout();
    iconLayout->addWidget(labelAppIcon);
    iconLayout->addWidget(labelDeveloperIcon);

    // Right : texts
    QString nameVersion = "MyMap 0.1.0";
    QLabel* labelAppNameVersion = new QLabel(nameVersion, this);
    labelAppNameVersion->setFont(QFont("Timers", 20, QFont::Bold));

    QString aboutText =
        "<p>Based on Qt 5.14.2</p>"
        "<p>Released on March 30 2020</p>"
        "<p>Author: dcxcn</p>"
        "<p>GitHub: <a href=\"https://github.com/dcxcn/MyMap\">dcxcn/MyMap</p>"
        "<p>Contact: <a href=\"837578856@qq.com\">837578856@qq.com</a></p>"
        "";
    QLabel* textLabel = new QLabel(aboutText, this);
    textLabel->setOpenExternalLinks(true);

    QVBoxLayout* textLayout = new QVBoxLayout();
    textLayout->addWidget(labelAppNameVersion);
    textLayout->addWidget(textLabel);

    // Main layout
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    mainLayout->addLayout(iconLayout);
    mainLayout->addLayout(textLayout);
}

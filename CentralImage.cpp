#include "CentralImage.h"

CentralImage::CentralImage(MainWindow *parent)
{
    father = parent;

    QPushButton *closeButton = new QPushButton("X", this);
    closeButton->setFixedWidth(25);
    closeButton->move(274, 1);
    connect(closeButton, SIGNAL(clicked()), this, SLOT(handleCloseButton()));
}

void CentralImage::handleCloseButton()
{
    father->centralLayout->removeWidget(this);
    delete this;
}

void CentralImage::mousePressEvent(QMouseEvent *event)
{
    raise();
}
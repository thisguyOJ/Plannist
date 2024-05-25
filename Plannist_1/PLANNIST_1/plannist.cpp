#include "plannist.h"
#include "./ui_plannist.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QSize>
#include <QAction>
#include <qrect.h>
#include <qscreen.h>
#include <QVector>

Plannist::Plannist(QWidget *parent)
    : QWidget(parent, Qt::FramelessWindowHint | Qt::WindowSystemMenuHint)
{
    setAttribute(Qt::WA_TranslucentBackground);
    QAction *quitAction = new QAction(tr("E&xit"), this);
    quitAction->setShortcut(tr("Ctrl+Q"));
    connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);
    addAction(quitAction);

    setContextMenuPolicy(Qt::ActionsContextMenu);
    setToolTip("Click the plus button to open");
    setWindowTitle(tr("Plannist"));
}


// paintEvent
void Plannist::paintEvent(QPaintEvent *event){
    QPainter paint(this);
    // set the drawing styles
    QPen pen(Qt::black, 2);
    QBrush brush(Qt::blue);
    paint.setPen(pen);
    paint.setBrush(brush);

    // Define and draw triangle
    QVector<QPoint> sidebarHead =  {QPoint(50, 40), QPoint(70, 70), QPoint(50, 100)};
    QPolygon polygon(sidebarHead);
    paint.drawPolygon(polygon);

    //setting the position of the sidebar triangle according to the users screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    this->setGeometry(1290, 120, width, height);//1366, 768
}

//void Plannist::openTray(QPaintEvent *event){
//    //the tray acts as a container for the contents
//    QPainter paint(this);
//    // set the drawing styles
//    QPen pen(Qt::black, 1);
//    QBrush brush(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
//    paint.setPen(pen);
//    paint.setBrush(brush);
//}

/*QSize Plannist::sizeHint() const{
    return QSize(100, 100);
}*/


Plannist::~Plannist()
{
    //delete ui;
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include "DockManager.h"
#include <QGraphicsView>
#include "widgets/graphicsview.h"
#include "widgets/viewportcontroller.h"
using namespace dororo;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_DockManager = new ads::CDockManager(this);
    ads::CDockWidget* DockWidget = nullptr;

//    QLabel* l = new QLabel();
//    l->setWordWrap(true);
//    l->setAlignment(Qt::AlignTop | Qt::AlignLeft);
//    l->setText("Lorem ipsum dolor sit amet, consectetuer adipiscing elit. ");

    auto view = new GraphicsView(this);
    auto scene = new QGraphicsScene(view);
    view->setScene(scene);
    auto img = QPixmap("..\\..\\..\\..\\other\\asdf.jpg");
    auto map = scene->addPixmap(img);
    scene->update();
    DockWidget = new ads::CDockWidget("Window 1");
    DockWidget->setWidget(view);
    m_DockManager->addDockWidget(ads::TopDockWidgetArea, DockWidget);
    ui->menuView->addAction(DockWidget->toggleViewAction());

    auto c = new ViewportController(map);
    //scene->addItem(c);
    c->setRect(200, 200, 50, 100);
    c->setPen(QPen(Qt::GlobalColor::yellow));

    //connect(c, &ViewportController::viewportChanged, this, [](const QRectF& r){qDebug() << r;});
    //connect(view, &GraphicsView::viewportChanged, this, [](const QRectF& r){qDebug() << r;});

    auto view2 = new GraphicsView(this);
    auto scene2 = new QGraphicsScene(view2);
    view2->setScene(scene2);
    img = QPixmap("..\\..\\..\\..\\other\\asdf.jpg");
    scene2->addPixmap(img);
    scene2->update();
    DockWidget = new ads::CDockWidget("Window 2");
    DockWidget->setWidget(view2);
    m_DockManager->addDockWidget(ads::RightDockWidgetArea, DockWidget);
    ui->menuView->addAction(DockWidget->toggleViewAction());

    connect(view2, &GraphicsView::viewportChanged, c,
            [c](const QRectF& r){QSignalBlocker x(c); c->setRect(r);});
    connect(c, &ViewportController::viewportChanged, view2,
            [view2](const QRectF& r){QSignalBlocker x(view2); view2->setViewportRect(r);});
}

MainWindow::~MainWindow()
{
    delete ui;
}


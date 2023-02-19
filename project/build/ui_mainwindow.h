/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *control_frm;
    QVBoxLayout *verticalLayout;
    QTabWidget *control_objects_tab;
    QWidget *camera_tab;
    QVBoxLayout *verticalLayout_2;
    QToolBox *control_toolbox;
    QWidget *connection_page;
    QWidget *cam_control_page;
    QWidget *objective_tab;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QMenuBar *menubar;
    QMenu *menuView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(986, 746);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        control_frm = new QFrame(centralwidget);
        control_frm->setObjectName("control_frm");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(control_frm->sizePolicy().hasHeightForWidth());
        control_frm->setSizePolicy(sizePolicy);
        control_frm->setMinimumSize(QSize(300, 0));
        control_frm->setFrameShape(QFrame::StyledPanel);
        control_frm->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(control_frm);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        control_objects_tab = new QTabWidget(control_frm);
        control_objects_tab->setObjectName("control_objects_tab");
        camera_tab = new QWidget();
        camera_tab->setObjectName("camera_tab");
        verticalLayout_2 = new QVBoxLayout(camera_tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        control_toolbox = new QToolBox(camera_tab);
        control_toolbox->setObjectName("control_toolbox");
        connection_page = new QWidget();
        connection_page->setObjectName("connection_page");
        connection_page->setGeometry(QRect(0, 0, 294, 612));
        control_toolbox->addItem(connection_page, QString::fromUtf8("\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265"));
        cam_control_page = new QWidget();
        cam_control_page->setObjectName("cam_control_page");
        cam_control_page->setGeometry(QRect(0, 0, 294, 612));
        control_toolbox->addItem(cam_control_page, QString::fromUtf8("Page 2"));

        verticalLayout_2->addWidget(control_toolbox);

        control_objects_tab->addTab(camera_tab, QString());
        objective_tab = new QWidget();
        objective_tab->setObjectName("objective_tab");
        control_objects_tab->addTab(objective_tab, QString());

        verticalLayout->addWidget(control_objects_tab);


        horizontalLayout->addWidget(control_frm);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_3);


        horizontalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 986, 25));
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuView->menuAction());

        retranslateUi(MainWindow);

        control_objects_tab->setCurrentIndex(0);
        control_toolbox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        control_toolbox->setItemText(control_toolbox->indexOf(connection_page), QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        control_toolbox->setItemText(control_toolbox->indexOf(cam_control_page), QCoreApplication::translate("MainWindow", "Page 2", nullptr));
        control_objects_tab->setTabText(control_objects_tab->indexOf(camera_tab), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\274\320\265\321\200\320\260", nullptr));
        control_objects_tab->setTabText(control_objects_tab->indexOf(objective_tab), QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202\320\270\320\262", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

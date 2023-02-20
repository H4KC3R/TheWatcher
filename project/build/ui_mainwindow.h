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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
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
    QToolBox *cam_control_toolbox;
    QWidget *cam_page;
    QVBoxLayout *verticalLayout_4;
    QFrame *cam_connection_frm;
    QVBoxLayout *verticalLayout_5;
    QFrame *find_frm;
    QVBoxLayout *verticalLayout_6;
    QPushButton *find_btn;
    QFrame *connection_frm;
    QGridLayout *gridLayout;
    QPushButton *disconnect_btn;
    QPushButton *connect_btn;
    QComboBox *camera_combox;
    QComboBox *mode_combox;
    QFrame *cam_control_frm;
    QVBoxLayout *verticalLayout_8;
    QFrame *bit_frm;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bit_label;
    QComboBox *bit_combox;
    QFrame *bit_line;
    QFrame *gain_frm;
    QHBoxLayout *horizontalLayout_3;
    QLabel *gain_lbl;
    QDoubleSpinBox *gain_spnbox;
    QFrame *gain_min_max_frm;
    QGridLayout *gridLayout_2;
    QLabel *gmax_lbl;
    QLabel *gmax_val_lbl;
    QLabel *gmin_lbl;
    QLabel *gmax_val_lbl_2;
    QSlider *gain_hslider;
    QFrame *gain_line;
    QFrame *exposure_frm;
    QHBoxLayout *horizontalLayout_4;
    QLabel *exposure_lbl;
    QDoubleSpinBox *exposure_spnbox;
    QFrame *exposure_min_max_frm;
    QGridLayout *gridLayout_3;
    QLabel *emax_val_lbl;
    QLabel *emax_lbl;
    QLabel *emin_lbl;
    QLabel *emin_val_lbl;
    QSlider *exposure_hslider;
    QFrame *exposure_line;
    QPushButton *set_control_btn;
    QGroupBox *capture_grpbox;
    QVBoxLayout *verticalLayout_7;
    QPushButton *start_capture_btn;
    QPushButton *stop_capture_btn;
    QWidget *image_process_page;
    QVBoxLayout *verticalLayout_10;
    QFrame *image_process_frame;
    QVBoxLayout *verticalLayout_11;
    QFrame *blur_control_frm;
    QHBoxLayout *horizontalLayout_6;
    QLabel *blur_lbl;
    QLineEdit *blue_lnedit;
    QCheckBox *wb_chkbox;
    QCheckBox *debayer_chkbox;
    QFrame *contrasts_frm;
    QVBoxLayout *verticalLayout_12;
    QFrame *contrast_frm;
    QGridLayout *gridLayout_4;
    QSpinBox *alpha_coeff_spnbox;
    QLabel *alpha_coeff_lbl;
    QLabel *contrast_lbl;
    QSlider *contrast_hslider;
    QFrame *gamma_contrast_frm;
    QGridLayout *gridLayout_5;
    QSpinBox *gamma_coeff_spnbox;
    QLabel *gamma_coeff_lbl;
    QLabel *gamma_contrast_lbl;
    QSlider *gamma_contrast_hslider;
    QFrame *autoexposure_frm;
    QHBoxLayout *horizontalLayout_5;
    QWidget *objective_tab;
    QVBoxLayout *verticalLayout_9;
    QFrame *objective_connection_frm;
    QGridLayout *gridLayout_6;
    QPushButton *com_find_btn;
    QComboBox *com_ports_combox;
    QPushButton *com_connect_btn;
    QPushButton *com_disconnect_btn;
    QFrame *lens_frm;
    QVBoxLayout *verticalLayout_15;
    QLabel *notification_lbl;
    QLineEdit *lens_file_lnedit;
    QPushButton *lens_file_btn;
    QFrame *objective_control_frm;
    QVBoxLayout *verticalLayout_14;
    QPushButton *set_apperture_btn;
    QComboBox *set_apperture_combox;
    QFrame *line;
    QPushButton *set_focus_btn;
    QSpinBox *set_focus_spnbox;
    QFrame *line_2;
    QPushButton *pushButton_6;
    QSpinBox *get_focus_spnbox;
    QFrame *line_3;
    QLabel *error_lbl;
    QLineEdit *error_lnedit;
    QFrame *stub_frm;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *processed_image_frm;
    QHBoxLayout *horizontalLayout_7;
    QFrame *raw_image_frm;
    QHBoxLayout *horizontalLayout_8;
    QMenuBar *menubar;
    QMenu *menuView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(986, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QFont font;
        font.setPointSize(11);
        centralwidget->setFont(font);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 9, 9);
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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(control_objects_tab->sizePolicy().hasHeightForWidth());
        control_objects_tab->setSizePolicy(sizePolicy1);
        control_objects_tab->setAutoFillBackground(false);
        camera_tab = new QWidget();
        camera_tab->setObjectName("camera_tab");
        verticalLayout_2 = new QVBoxLayout(camera_tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cam_control_toolbox = new QToolBox(camera_tab);
        cam_control_toolbox->setObjectName("cam_control_toolbox");
        cam_page = new QWidget();
        cam_page->setObjectName("cam_page");
        cam_page->setGeometry(QRect(0, 0, 299, 586));
        verticalLayout_4 = new QVBoxLayout(cam_page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cam_connection_frm = new QFrame(cam_page);
        cam_connection_frm->setObjectName("cam_connection_frm");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cam_connection_frm->sizePolicy().hasHeightForWidth());
        cam_connection_frm->setSizePolicy(sizePolicy2);
        cam_connection_frm->setFrameShape(QFrame::StyledPanel);
        cam_connection_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(cam_connection_frm);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        find_frm = new QFrame(cam_connection_frm);
        find_frm->setObjectName("find_frm");
        sizePolicy2.setHeightForWidth(find_frm->sizePolicy().hasHeightForWidth());
        find_frm->setSizePolicy(sizePolicy2);
        find_frm->setFrameShape(QFrame::StyledPanel);
        find_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(find_frm);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        find_btn = new QPushButton(find_frm);
        find_btn->setObjectName("find_btn");

        verticalLayout_6->addWidget(find_btn);


        verticalLayout_5->addWidget(find_frm);

        connection_frm = new QFrame(cam_connection_frm);
        connection_frm->setObjectName("connection_frm");
        sizePolicy2.setHeightForWidth(connection_frm->sizePolicy().hasHeightForWidth());
        connection_frm->setSizePolicy(sizePolicy2);
        connection_frm->setFrameShape(QFrame::StyledPanel);
        connection_frm->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(connection_frm);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        disconnect_btn = new QPushButton(connection_frm);
        disconnect_btn->setObjectName("disconnect_btn");
        disconnect_btn->setEnabled(false);

        gridLayout->addWidget(disconnect_btn, 1, 1, 1, 1);

        connect_btn = new QPushButton(connection_frm);
        connect_btn->setObjectName("connect_btn");

        gridLayout->addWidget(connect_btn, 0, 1, 1, 1);

        camera_combox = new QComboBox(connection_frm);
        camera_combox->setObjectName("camera_combox");

        gridLayout->addWidget(camera_combox, 0, 0, 1, 1);

        mode_combox = new QComboBox(connection_frm);
        mode_combox->setObjectName("mode_combox");
        mode_combox->setEnabled(false);

        gridLayout->addWidget(mode_combox, 1, 0, 1, 1);


        verticalLayout_5->addWidget(connection_frm);


        verticalLayout_4->addWidget(cam_connection_frm);

        cam_control_frm = new QFrame(cam_page);
        cam_control_frm->setObjectName("cam_control_frm");
        cam_control_frm->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cam_control_frm->sizePolicy().hasHeightForWidth());
        cam_control_frm->setSizePolicy(sizePolicy3);
        cam_control_frm->setFrameShape(QFrame::StyledPanel);
        cam_control_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(cam_control_frm);
        verticalLayout_8->setObjectName("verticalLayout_8");
        bit_frm = new QFrame(cam_control_frm);
        bit_frm->setObjectName("bit_frm");
        sizePolicy2.setHeightForWidth(bit_frm->sizePolicy().hasHeightForWidth());
        bit_frm->setSizePolicy(sizePolicy2);
        bit_frm->setFrameShape(QFrame::StyledPanel);
        bit_frm->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(bit_frm);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bit_label = new QLabel(bit_frm);
        bit_label->setObjectName("bit_label");

        horizontalLayout_2->addWidget(bit_label);

        bit_combox = new QComboBox(bit_frm);
        bit_combox->setObjectName("bit_combox");

        horizontalLayout_2->addWidget(bit_combox);


        verticalLayout_8->addWidget(bit_frm);

        bit_line = new QFrame(cam_control_frm);
        bit_line->setObjectName("bit_line");
        bit_line->setFrameShadow(QFrame::Plain);
        bit_line->setLineWidth(1);
        bit_line->setFrameShape(QFrame::HLine);

        verticalLayout_8->addWidget(bit_line);

        gain_frm = new QFrame(cam_control_frm);
        gain_frm->setObjectName("gain_frm");
        gain_frm->setFrameShape(QFrame::StyledPanel);
        gain_frm->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(gain_frm);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gain_lbl = new QLabel(gain_frm);
        gain_lbl->setObjectName("gain_lbl");

        horizontalLayout_3->addWidget(gain_lbl);

        gain_spnbox = new QDoubleSpinBox(gain_frm);
        gain_spnbox->setObjectName("gain_spnbox");
        sizePolicy2.setHeightForWidth(gain_spnbox->sizePolicy().hasHeightForWidth());
        gain_spnbox->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(gain_spnbox);


        verticalLayout_8->addWidget(gain_frm);

        gain_min_max_frm = new QFrame(cam_control_frm);
        gain_min_max_frm->setObjectName("gain_min_max_frm");
        gain_min_max_frm->setFrameShape(QFrame::StyledPanel);
        gain_min_max_frm->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(gain_min_max_frm);
        gridLayout_2->setObjectName("gridLayout_2");
        gmax_lbl = new QLabel(gain_min_max_frm);
        gmax_lbl->setObjectName("gmax_lbl");
        gmax_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(gmax_lbl, 1, 1, 1, 1);

        gmax_val_lbl = new QLabel(gain_min_max_frm);
        gmax_val_lbl->setObjectName("gmax_val_lbl");

        gridLayout_2->addWidget(gmax_val_lbl, 4, 0, 1, 1);

        gmin_lbl = new QLabel(gain_min_max_frm);
        gmin_lbl->setObjectName("gmin_lbl");

        gridLayout_2->addWidget(gmin_lbl, 1, 0, 1, 1);

        gmax_val_lbl_2 = new QLabel(gain_min_max_frm);
        gmax_val_lbl_2->setObjectName("gmax_val_lbl_2");
        gmax_val_lbl_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(gmax_val_lbl_2, 4, 1, 1, 1);


        verticalLayout_8->addWidget(gain_min_max_frm);

        gain_hslider = new QSlider(cam_control_frm);
        gain_hslider->setObjectName("gain_hslider");
        gain_hslider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(gain_hslider);

        gain_line = new QFrame(cam_control_frm);
        gain_line->setObjectName("gain_line");
        gain_line->setFrameShadow(QFrame::Plain);
        gain_line->setFrameShape(QFrame::HLine);

        verticalLayout_8->addWidget(gain_line);

        exposure_frm = new QFrame(cam_control_frm);
        exposure_frm->setObjectName("exposure_frm");
        exposure_frm->setFrameShape(QFrame::StyledPanel);
        exposure_frm->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(exposure_frm);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        exposure_lbl = new QLabel(exposure_frm);
        exposure_lbl->setObjectName("exposure_lbl");

        horizontalLayout_4->addWidget(exposure_lbl);

        exposure_spnbox = new QDoubleSpinBox(exposure_frm);
        exposure_spnbox->setObjectName("exposure_spnbox");
        sizePolicy3.setHeightForWidth(exposure_spnbox->sizePolicy().hasHeightForWidth());
        exposure_spnbox->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(exposure_spnbox);


        verticalLayout_8->addWidget(exposure_frm);

        exposure_min_max_frm = new QFrame(cam_control_frm);
        exposure_min_max_frm->setObjectName("exposure_min_max_frm");
        exposure_min_max_frm->setFrameShape(QFrame::StyledPanel);
        exposure_min_max_frm->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(exposure_min_max_frm);
        gridLayout_3->setObjectName("gridLayout_3");
        emax_val_lbl = new QLabel(exposure_min_max_frm);
        emax_val_lbl->setObjectName("emax_val_lbl");
        emax_val_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(emax_val_lbl, 1, 1, 1, 1);

        emax_lbl = new QLabel(exposure_min_max_frm);
        emax_lbl->setObjectName("emax_lbl");
        emax_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(emax_lbl, 0, 1, 1, 1);

        emin_lbl = new QLabel(exposure_min_max_frm);
        emin_lbl->setObjectName("emin_lbl");

        gridLayout_3->addWidget(emin_lbl, 0, 0, 1, 1);

        emin_val_lbl = new QLabel(exposure_min_max_frm);
        emin_val_lbl->setObjectName("emin_val_lbl");

        gridLayout_3->addWidget(emin_val_lbl, 1, 0, 1, 1);


        verticalLayout_8->addWidget(exposure_min_max_frm);

        exposure_hslider = new QSlider(cam_control_frm);
        exposure_hslider->setObjectName("exposure_hslider");
        exposure_hslider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(exposure_hslider);

        exposure_line = new QFrame(cam_control_frm);
        exposure_line->setObjectName("exposure_line");
        exposure_line->setFrameShadow(QFrame::Plain);
        exposure_line->setFrameShape(QFrame::HLine);

        verticalLayout_8->addWidget(exposure_line);

        set_control_btn = new QPushButton(cam_control_frm);
        set_control_btn->setObjectName("set_control_btn");

        verticalLayout_8->addWidget(set_control_btn);


        verticalLayout_4->addWidget(cam_control_frm);

        capture_grpbox = new QGroupBox(cam_page);
        capture_grpbox->setObjectName("capture_grpbox");
        capture_grpbox->setEnabled(false);
        sizePolicy2.setHeightForWidth(capture_grpbox->sizePolicy().hasHeightForWidth());
        capture_grpbox->setSizePolicy(sizePolicy2);
        verticalLayout_7 = new QVBoxLayout(capture_grpbox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        start_capture_btn = new QPushButton(capture_grpbox);
        start_capture_btn->setObjectName("start_capture_btn");

        verticalLayout_7->addWidget(start_capture_btn);

        stop_capture_btn = new QPushButton(capture_grpbox);
        stop_capture_btn->setObjectName("stop_capture_btn");

        verticalLayout_7->addWidget(stop_capture_btn);


        verticalLayout_4->addWidget(capture_grpbox);

        cam_control_toolbox->addItem(cam_page, QString::fromUtf8("\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265"));
        image_process_page = new QWidget();
        image_process_page->setObjectName("image_process_page");
        image_process_page->setEnabled(false);
        image_process_page->setGeometry(QRect(0, 0, 317, 586));
        verticalLayout_10 = new QVBoxLayout(image_process_page);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        image_process_frame = new QFrame(image_process_page);
        image_process_frame->setObjectName("image_process_frame");
        image_process_frame->setFrameShape(QFrame::StyledPanel);
        image_process_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(image_process_frame);
        verticalLayout_11->setObjectName("verticalLayout_11");
        blur_control_frm = new QFrame(image_process_frame);
        blur_control_frm->setObjectName("blur_control_frm");
        blur_control_frm->setFrameShape(QFrame::StyledPanel);
        blur_control_frm->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(blur_control_frm);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        blur_lbl = new QLabel(blur_control_frm);
        blur_lbl->setObjectName("blur_lbl");

        horizontalLayout_6->addWidget(blur_lbl);

        blue_lnedit = new QLineEdit(blur_control_frm);
        blue_lnedit->setObjectName("blue_lnedit");

        horizontalLayout_6->addWidget(blue_lnedit);


        verticalLayout_11->addWidget(blur_control_frm);

        wb_chkbox = new QCheckBox(image_process_frame);
        wb_chkbox->setObjectName("wb_chkbox");

        verticalLayout_11->addWidget(wb_chkbox);

        debayer_chkbox = new QCheckBox(image_process_frame);
        debayer_chkbox->setObjectName("debayer_chkbox");

        verticalLayout_11->addWidget(debayer_chkbox);

        contrasts_frm = new QFrame(image_process_frame);
        contrasts_frm->setObjectName("contrasts_frm");
        sizePolicy2.setHeightForWidth(contrasts_frm->sizePolicy().hasHeightForWidth());
        contrasts_frm->setSizePolicy(sizePolicy2);
        contrasts_frm->setMinimumSize(QSize(0, 300));
        contrasts_frm->setFrameShape(QFrame::StyledPanel);
        contrasts_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(contrasts_frm);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        contrast_frm = new QFrame(contrasts_frm);
        contrast_frm->setObjectName("contrast_frm");
        sizePolicy2.setHeightForWidth(contrast_frm->sizePolicy().hasHeightForWidth());
        contrast_frm->setSizePolicy(sizePolicy2);
        contrast_frm->setFrameShape(QFrame::StyledPanel);
        contrast_frm->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(contrast_frm);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        alpha_coeff_spnbox = new QSpinBox(contrast_frm);
        alpha_coeff_spnbox->setObjectName("alpha_coeff_spnbox");

        gridLayout_4->addWidget(alpha_coeff_spnbox, 2, 1, 1, 1);

        alpha_coeff_lbl = new QLabel(contrast_frm);
        alpha_coeff_lbl->setObjectName("alpha_coeff_lbl");

        gridLayout_4->addWidget(alpha_coeff_lbl, 2, 0, 1, 1);

        contrast_lbl = new QLabel(contrast_frm);
        contrast_lbl->setObjectName("contrast_lbl");

        gridLayout_4->addWidget(contrast_lbl, 1, 0, 1, 1);


        verticalLayout_12->addWidget(contrast_frm);

        contrast_hslider = new QSlider(contrasts_frm);
        contrast_hslider->setObjectName("contrast_hslider");
        contrast_hslider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(contrast_hslider);

        gamma_contrast_frm = new QFrame(contrasts_frm);
        gamma_contrast_frm->setObjectName("gamma_contrast_frm");
        sizePolicy2.setHeightForWidth(gamma_contrast_frm->sizePolicy().hasHeightForWidth());
        gamma_contrast_frm->setSizePolicy(sizePolicy2);
        gamma_contrast_frm->setFrameShape(QFrame::StyledPanel);
        gamma_contrast_frm->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(gamma_contrast_frm);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gamma_coeff_spnbox = new QSpinBox(gamma_contrast_frm);
        gamma_coeff_spnbox->setObjectName("gamma_coeff_spnbox");

        gridLayout_5->addWidget(gamma_coeff_spnbox, 1, 3, 1, 1);

        gamma_coeff_lbl = new QLabel(gamma_contrast_frm);
        gamma_coeff_lbl->setObjectName("gamma_coeff_lbl");

        gridLayout_5->addWidget(gamma_coeff_lbl, 1, 1, 1, 1);

        gamma_contrast_lbl = new QLabel(gamma_contrast_frm);
        gamma_contrast_lbl->setObjectName("gamma_contrast_lbl");

        gridLayout_5->addWidget(gamma_contrast_lbl, 0, 1, 1, 1);


        verticalLayout_12->addWidget(gamma_contrast_frm);

        gamma_contrast_hslider = new QSlider(contrasts_frm);
        gamma_contrast_hslider->setObjectName("gamma_contrast_hslider");
        gamma_contrast_hslider->setOrientation(Qt::Horizontal);

        verticalLayout_12->addWidget(gamma_contrast_hslider);


        verticalLayout_11->addWidget(contrasts_frm);

        autoexposure_frm = new QFrame(image_process_frame);
        autoexposure_frm->setObjectName("autoexposure_frm");
        autoexposure_frm->setFrameShape(QFrame::StyledPanel);
        autoexposure_frm->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(autoexposure_frm);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(autoexposure_frm);


        verticalLayout_10->addWidget(image_process_frame);

        cam_control_toolbox->addItem(image_process_page, QString::fromUtf8("\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260"));

        verticalLayout_2->addWidget(cam_control_toolbox);

        control_objects_tab->addTab(camera_tab, QString());
        objective_tab = new QWidget();
        objective_tab->setObjectName("objective_tab");
        verticalLayout_9 = new QVBoxLayout(objective_tab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        objective_connection_frm = new QFrame(objective_tab);
        objective_connection_frm->setObjectName("objective_connection_frm");
        sizePolicy2.setHeightForWidth(objective_connection_frm->sizePolicy().hasHeightForWidth());
        objective_connection_frm->setSizePolicy(sizePolicy2);
        objective_connection_frm->setFrameShape(QFrame::StyledPanel);
        objective_connection_frm->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(objective_connection_frm);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        com_find_btn = new QPushButton(objective_connection_frm);
        com_find_btn->setObjectName("com_find_btn");

        gridLayout_6->addWidget(com_find_btn, 0, 0, 1, 1);

        com_ports_combox = new QComboBox(objective_connection_frm);
        com_ports_combox->setObjectName("com_ports_combox");

        gridLayout_6->addWidget(com_ports_combox, 0, 3, 1, 1);

        com_connect_btn = new QPushButton(objective_connection_frm);
        com_connect_btn->setObjectName("com_connect_btn");

        gridLayout_6->addWidget(com_connect_btn, 1, 0, 1, 1);

        com_disconnect_btn = new QPushButton(objective_connection_frm);
        com_disconnect_btn->setObjectName("com_disconnect_btn");
        com_disconnect_btn->setEnabled(false);

        gridLayout_6->addWidget(com_disconnect_btn, 1, 3, 1, 1);


        verticalLayout_9->addWidget(objective_connection_frm);

        lens_frm = new QFrame(objective_tab);
        lens_frm->setObjectName("lens_frm");
        lens_frm->setEnabled(false);
        lens_frm->setFrameShape(QFrame::StyledPanel);
        lens_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(lens_frm);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        notification_lbl = new QLabel(lens_frm);
        notification_lbl->setObjectName("notification_lbl");
        sizePolicy.setHeightForWidth(notification_lbl->sizePolicy().hasHeightForWidth());
        notification_lbl->setSizePolicy(sizePolicy);

        verticalLayout_15->addWidget(notification_lbl);

        lens_file_lnedit = new QLineEdit(lens_frm);
        lens_file_lnedit->setObjectName("lens_file_lnedit");

        verticalLayout_15->addWidget(lens_file_lnedit);

        lens_file_btn = new QPushButton(lens_frm);
        lens_file_btn->setObjectName("lens_file_btn");

        verticalLayout_15->addWidget(lens_file_btn);


        verticalLayout_9->addWidget(lens_frm);

        objective_control_frm = new QFrame(objective_tab);
        objective_control_frm->setObjectName("objective_control_frm");
        objective_control_frm->setEnabled(false);
        objective_control_frm->setFrameShape(QFrame::StyledPanel);
        objective_control_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(objective_control_frm);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        set_apperture_btn = new QPushButton(objective_control_frm);
        set_apperture_btn->setObjectName("set_apperture_btn");

        verticalLayout_14->addWidget(set_apperture_btn);

        set_apperture_combox = new QComboBox(objective_control_frm);
        set_apperture_combox->setObjectName("set_apperture_combox");

        verticalLayout_14->addWidget(set_apperture_combox);

        line = new QFrame(objective_control_frm);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_14->addWidget(line);

        set_focus_btn = new QPushButton(objective_control_frm);
        set_focus_btn->setObjectName("set_focus_btn");

        verticalLayout_14->addWidget(set_focus_btn);

        set_focus_spnbox = new QSpinBox(objective_control_frm);
        set_focus_spnbox->setObjectName("set_focus_spnbox");

        verticalLayout_14->addWidget(set_focus_spnbox);

        line_2 = new QFrame(objective_control_frm);
        line_2->setObjectName("line_2");
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_14->addWidget(line_2);

        pushButton_6 = new QPushButton(objective_control_frm);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_14->addWidget(pushButton_6);

        get_focus_spnbox = new QSpinBox(objective_control_frm);
        get_focus_spnbox->setObjectName("get_focus_spnbox");

        verticalLayout_14->addWidget(get_focus_spnbox);

        line_3 = new QFrame(objective_control_frm);
        line_3->setObjectName("line_3");
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_14->addWidget(line_3);

        error_lbl = new QLabel(objective_control_frm);
        error_lbl->setObjectName("error_lbl");

        verticalLayout_14->addWidget(error_lbl);

        error_lnedit = new QLineEdit(objective_control_frm);
        error_lnedit->setObjectName("error_lnedit");

        verticalLayout_14->addWidget(error_lnedit);


        verticalLayout_9->addWidget(objective_control_frm);

        stub_frm = new QFrame(objective_tab);
        stub_frm->setObjectName("stub_frm");
        stub_frm->setFrameShape(QFrame::StyledPanel);
        stub_frm->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(stub_frm);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);

        verticalLayout_9->addWidget(stub_frm);

        control_objects_tab->addTab(objective_tab, QString());

        verticalLayout->addWidget(control_objects_tab);


        horizontalLayout->addWidget(control_frm);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        processed_image_frm = new QFrame(frame_2);
        processed_image_frm->setObjectName("processed_image_frm");
        processed_image_frm->setFrameShape(QFrame::Box);
        processed_image_frm->setFrameShadow(QFrame::Raised);
        processed_image_frm->setLineWidth(3);
        horizontalLayout_7 = new QHBoxLayout(processed_image_frm);
        horizontalLayout_7->setObjectName("horizontalLayout_7");

        verticalLayout_3->addWidget(processed_image_frm);

        raw_image_frm = new QFrame(frame_2);
        raw_image_frm->setObjectName("raw_image_frm");
        raw_image_frm->setFrameShape(QFrame::Box);
        raw_image_frm->setFrameShadow(QFrame::Raised);
        raw_image_frm->setLineWidth(3);
        horizontalLayout_8 = new QHBoxLayout(raw_image_frm);
        horizontalLayout_8->setObjectName("horizontalLayout_8");

        verticalLayout_3->addWidget(raw_image_frm);


        horizontalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 986, 21));
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuView->menuAction());

        retranslateUi(MainWindow);

        control_objects_tab->setCurrentIndex(1);
        cam_control_toolbox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        find_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\272\320\260\320\274\320\265\321\200", nullptr));
        disconnect_btn->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        connect_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        bit_label->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\321\202", nullptr));
        gain_lbl->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\270\320\273\320\265\320\275\320\270\320\265", nullptr));
        gmax_lbl->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        gmax_val_lbl->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        gmin_lbl->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        gmax_val_lbl_2->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        exposure_lbl->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\320\267\320\270\321\206\320\270\321\217(\320\274\321\201)", nullptr));
        emax_val_lbl->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        emax_lbl->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        emin_lbl->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        emin_val_lbl->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        set_control_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214", nullptr));
        capture_grpbox->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\212\320\265\320\274\320\272\320\260", nullptr));
        start_capture_btn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        stop_capture_btn->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        cam_control_toolbox->setItemText(cam_control_toolbox->indexOf(cam_page), QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        blur_lbl->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\204\320\276\320\272\321\203\321\201\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        wb_chkbox->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\273\320\260\320\275\321\201 \320\261\320\265\320\273\320\276\320\263\320\276", nullptr));
        debayer_chkbox->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\261\320\260\320\265\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        alpha_coeff_lbl->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202", nullptr));
        contrast_lbl->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202", nullptr));
        gamma_coeff_lbl->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202", nullptr));
        gamma_contrast_lbl->setText(QCoreApplication::translate("MainWindow", "\320\223\320\260\320\274\320\274\320\260 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202", nullptr));
        cam_control_toolbox->setItemText(cam_control_toolbox->indexOf(image_process_page), QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260", nullptr));
        control_objects_tab->setTabText(control_objects_tab->indexOf(camera_tab), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\274\320\265\321\200\320\260", nullptr));
        com_find_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        com_connect_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        com_disconnect_btn->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        notification_lbl->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! \320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\267\320\260\320\264\320\260\321\202\321\214 \321\204\320\260\320\271\320\273<br/>\321\201 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\213\320\274\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274\320\270 \320\260\320\277\320\277\320\265\321\200\321\202\321\203\321\200\321\213,<br/>\320\264\320\273\321\217 \320\262\320\260\321\210\320\265\320\271 \320\274\320\276\320\264\320\265\320\273\320\270!</p><p><br/></p></body></html>", nullptr));
        lens_file_btn->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        set_apperture_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\260\320\277\320\277\320\265\321\200\321\202\321\203\321\200\321\203", nullptr));
        set_focus_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\204\320\276\320\272\321\203\321\201", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\204\320\276\320\272\321\203\321\201", nullptr));
        error_lbl->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        control_objects_tab->setTabText(control_objects_tab->indexOf(objective_tab), QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202\320\270\320\262", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

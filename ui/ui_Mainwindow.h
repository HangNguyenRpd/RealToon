/********************************************************************************
** Form generated from reading UI file 'Mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *AttributeBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *TranslateY;
    QDoubleSpinBox *TranslateX;
    QDoubleSpinBox *TranslateZ;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *RotateX;
    QDoubleSpinBox *RotateZ;
    QDoubleSpinBox *RotateY;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QDoubleSpinBox *ScaleY;
    QDoubleSpinBox *ScaleX;
    QDoubleSpinBox *ScaleZ;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_11;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *NearCp;
    QDoubleSpinBox *FarCp;
    QWidget *widget;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QDoubleSpinBox *CameraFOVInput;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *ToonSceneLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1098, 681);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AttributeBox = new QGroupBox(centralwidget);
        AttributeBox->setObjectName(QString::fromUtf8("AttributeBox"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        AttributeBox->setFont(font);
        AttributeBox->setFlat(false);
        AttributeBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(AttributeBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(AttributeBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        TranslateY = new QDoubleSpinBox(groupBox_3);
        TranslateY->setObjectName(QString::fromUtf8("TranslateY"));
        TranslateY->setKeyboardTracking(false);
        TranslateY->setMinimum(-99.000000000000000);

        gridLayout_5->addWidget(TranslateY, 0, 1, 1, 1);

        TranslateX = new QDoubleSpinBox(groupBox_3);
        TranslateX->setObjectName(QString::fromUtf8("TranslateX"));
        TranslateX->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TranslateX->sizePolicy().hasHeightForWidth());
        TranslateX->setSizePolicy(sizePolicy);
        TranslateX->setKeyboardTracking(false);
        TranslateX->setMinimum(-99.000000000000000);

        gridLayout_5->addWidget(TranslateX, 0, 0, 1, 1);

        TranslateZ = new QDoubleSpinBox(groupBox_3);
        TranslateZ->setObjectName(QString::fromUtf8("TranslateZ"));
        TranslateZ->setKeyboardTracking(false);
        TranslateZ->setMinimum(-99.000000000000000);

        gridLayout_5->addWidget(TranslateZ, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        RotateX = new QDoubleSpinBox(groupBox_4);
        RotateX->setObjectName(QString::fromUtf8("RotateX"));
        RotateX->setKeyboardTracking(false);
        RotateX->setMinimum(-360.000000000000000);
        RotateX->setMaximum(360.000000000000000);

        gridLayout_6->addWidget(RotateX, 0, 0, 1, 1);

        RotateZ = new QDoubleSpinBox(groupBox_4);
        RotateZ->setObjectName(QString::fromUtf8("RotateZ"));
        RotateZ->setKeyboardTracking(false);
        RotateZ->setMinimum(-360.000000000000000);
        RotateZ->setMaximum(360.000000000000000);

        gridLayout_6->addWidget(RotateZ, 0, 2, 1, 1);

        RotateY = new QDoubleSpinBox(groupBox_4);
        RotateY->setObjectName(QString::fromUtf8("RotateY"));
        RotateY->setKeyboardTracking(false);
        RotateY->setMinimum(-360.000000000000000);
        RotateY->setMaximum(360.000000000000000);

        gridLayout_6->addWidget(RotateY, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        ScaleY = new QDoubleSpinBox(groupBox_5);
        ScaleY->setObjectName(QString::fromUtf8("ScaleY"));
        ScaleY->setKeyboardTracking(false);
        ScaleY->setMinimum(-50.000000000000000);
        ScaleY->setMaximum(50.000000000000000);
        ScaleY->setValue(1.000000000000000);

        gridLayout_7->addWidget(ScaleY, 0, 1, 1, 1);

        ScaleX = new QDoubleSpinBox(groupBox_5);
        ScaleX->setObjectName(QString::fromUtf8("ScaleX"));
        ScaleX->setKeyboardTracking(false);
        ScaleX->setMinimum(-50.000000000000000);
        ScaleX->setMaximum(50.000000000000000);
        ScaleX->setValue(1.000000000000000);

        gridLayout_7->addWidget(ScaleX, 0, 0, 1, 1);

        ScaleZ = new QDoubleSpinBox(groupBox_5);
        ScaleZ->setObjectName(QString::fromUtf8("ScaleZ"));
        ScaleZ->setKeyboardTracking(false);
        ScaleZ->setMinimum(-50.000000000000000);
        ScaleZ->setMaximum(50.000000000000000);
        ScaleZ->setValue(1.000000000000000);

        gridLayout_7->addWidget(ScaleZ, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox = new QGroupBox(AttributeBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_8 = new QGroupBox(groupBox);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_11 = new QGridLayout(groupBox_8);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_11->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_11->addWidget(label_3, 0, 2, 1, 1);

        NearCp = new QDoubleSpinBox(groupBox_8);
        NearCp->setObjectName(QString::fromUtf8("NearCp"));
        NearCp->setKeyboardTracking(false);
        NearCp->setValue(0.010000000000000);

        gridLayout_11->addWidget(NearCp, 0, 1, 1, 1);

        FarCp = new QDoubleSpinBox(groupBox_8);
        FarCp->setObjectName(QString::fromUtf8("FarCp"));
        FarCp->setKeyboardTracking(false);
        FarCp->setMaximum(10000.000000000000000);
        FarCp->setValue(300.000000000000000);

        gridLayout_11->addWidget(FarCp, 0, 3, 1, 1);


        gridLayout_3->addWidget(groupBox_8, 1, 0, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        CameraFOVInput = new QDoubleSpinBox(widget);
        CameraFOVInput->setObjectName(QString::fromUtf8("CameraFOVInput"));
        CameraFOVInput->setKeyboardTracking(false);
        CameraFOVInput->setMinimum(1.000000000000000);
        CameraFOVInput->setValue(45.000000000000000);

        gridLayout_9->addWidget(CameraFOVInput, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);


        gridLayout->addWidget(AttributeBox, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        ToonSceneLayout = new QVBoxLayout();
        ToonSceneLayout->setSpacing(0);
        ToonSceneLayout->setObjectName(QString::fromUtf8("ToonSceneLayout"));

        gridLayout->addLayout(ToonSceneLayout, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1098, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Radio", nullptr));
        AttributeBox->setTitle(QApplication::translate("MainWindow", "Attribute Editor", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Radio", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Translation", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Rotation", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Scale", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Camera", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Clipping Plane", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Near", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Far", nullptr));
        label->setText(QApplication::translate("MainWindow", "FOV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

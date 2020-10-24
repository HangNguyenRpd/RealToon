#include "Mainwindow.h"
#include "ui_Mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
    m_scene = new ToonScene(this);
    m_ui->ToonSceneLayout->addWidget(m_scene);

    //connect all slots and signals
    connect(m_ui->CameraFOVInput, SIGNAL(valueChanged(double)), m_scene, SLOT(setFOV(double)));
    connect(m_ui->NearCp, SIGNAL(valueChanged(double)), m_scene, SLOT(setNearCp(double)));
    connect(m_ui->FarCp, SIGNAL(valueChanged(double)), m_scene, SLOT(setFarCp(double)));
    connect(m_ui->RotateX, SIGNAL(valueChanged(double)), m_scene, SLOT(setRotateX(double)));
    connect(m_ui->RotateY, SIGNAL(valueChanged(double)), m_scene, SLOT(setRotateY(double)));
    connect(m_ui->RotateZ, SIGNAL(valueChanged(double)), m_scene, SLOT(setRotateZ(double)));
    connect(m_ui->TranslateX, SIGNAL(valueChanged(double)), m_scene, SLOT(setTranslateX(double)));
    connect(m_ui->TranslateY, SIGNAL(valueChanged(double)), m_scene, SLOT(setTranslateY(double)));
    connect(m_ui->TranslateZ, SIGNAL(valueChanged(double)), m_scene, SLOT(setTranslateZ(double)));
    connect(m_ui->ScaleX, SIGNAL(valueChanged(double)), m_scene, SLOT(setScaleX(double)));
    connect(m_ui->ScaleY, SIGNAL(valueChanged(double)), m_scene, SLOT(setScaleY(double)));
    connect(m_ui->ScaleZ, SIGNAL(valueChanged(double)), m_scene, SLOT(setScaleZ(double)));
}

MainWindow::~MainWindow()
{
    delete m_ui;
    delete m_scene;
}

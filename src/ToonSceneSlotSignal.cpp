#include "ToonScene.h"


void ToonScene::setFOV(double ui_FOV)
{
    m_FOV = ui_FOV;
    update();
}

void ToonScene::setNearCp(double ui_NearCp)
{
    m_NearCp = ui_NearCp;
    update();
}

void ToonScene::setFarCp(double ui_FarCp)
{
    m_FarCp = ui_FarCp;
    update();
}


void ToonScene::setTranslateX(double ui_TranslateX)
{
    radio.Translate.m_x = ui_TranslateX;
    update();
}

void ToonScene::setTranslateY(double ui_TranslateY)
{
    radio.Translate.m_y = ui_TranslateY;
    update();
}

void ToonScene::setTranslateZ(double ui_TranslateZ)
{
    radio.Translate.m_z = ui_TranslateZ;
    update();
}



void ToonScene::setRotateX(double ui_RotateX)
{
    radio.Rotate.m_x = ui_RotateX;
    update();
}

void ToonScene::setRotateY(double ui_RotateY)
{
    radio.Rotate.m_y = ui_RotateY;
    update();
}

void ToonScene::setRotateZ(double ui_RotateZ)
{
    radio.Rotate.m_z = ui_RotateZ;
    update();
}



void ToonScene::setScaleX(double ui_ScaleX)
{
    radio.Scale.m_x = ui_ScaleX;
    update();
}

void ToonScene::setScaleY(double ui_ScaleY)
{
    radio.Scale.m_y = ui_ScaleY;
    update();
}

void ToonScene::setScaleZ(double ui_ScaleZ)
{
    radio.Scale.m_z = ui_ScaleZ;
    update();
}

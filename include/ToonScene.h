#ifndef TOONSCENE_H
#define TOONSCENE_H

#include <ngl/Vec3.h>
#include <ngl/Mat4.h>
#include <ngl/Transformation.h>
#include <QOpenGLWidget>
#include <ngl/Obj.h>
#include <ngl/ShaderLib.h>
#include <QEvent>

struct WinParams
{
  bool rotate = false;
  bool translate = false;
  int origX = 0;
  int origY = 0;
  int origXPos = 0;
  int origYPos = 0;

};

struct Camera
{
    float horizontalAngle = 0.0f;
    float verticalAngle = 0.0f;
    ngl::Vec3 direction = ngl::Vec3(0.0f, 0.0f, -1.0f);
    float distance = 10.0f;
    ngl::Vec3 right = ngl::Vec3(-1.0f, 0.0f, 0.0f);
};

struct ModelTransform
{
    ngl::Vec3 Translate = ngl::Vec3(0.0f, 0.0f, 0.0f);
    ngl::Vec3 Rotate = ngl::Vec3(0.0f, 0.0f, 0.0f);
    ngl::Vec3 Scale = ngl::Vec3(1.0f, 1.0f, 1.0f);
};


class ToonScene : public QOpenGLWidget //NGL openGL drawing context
{
    Q_OBJECT
    public:
        ToonScene(QWidget *parent);
        ~ToonScene() override;
        void initializeGL() override;        //set up GL context
        void paintGL() override;             //draw the scene
        void resizeGL(int width, int height) override;
        bool createFramebufferObject();

        void mouseMoveEvent(QMouseEvent *_event) override;
        void mousePressEvent(QMouseEvent *_event) override;
        void mouseReleaseEvent(QMouseEvent *_event) override;
        void wheelEvent( QWheelEvent* _event ) override;


    public slots:
        void setFOV(double m_FOV);
        void setNearCp(double m_NearCp);
        void setFarCp(double m_FarCp);
        void setRotateX(double ui_RotateX);
        void setRotateY(double ui_RotateY);
        void setRotateZ(double ui_RotateZ);
        void setTranslateX(double ui_TranslateX);
        void setTranslateY(double ui_TranslateY);
        void setTranslateZ(double ui_TranslateZ);
        void setScaleX(double ui_ScaleX);
        void setScaleY(double ui_ScaleY);
        void setScaleZ(double ui_ScaleZ);

    protected:
        WinParams m_win;
        Camera camera;

    private:
        float m_width = 1024;
        float m_height = 720;
        ngl::Vec3 eye, look, up;
        ngl::Mat4 m_view;
        ngl::Mat4 m_projection;
        ngl::Mat4 m_model;
        ngl::Mat4 MVP;
        ModelTransform radio;
        ngl::Transformation m_transform;
        float m_FOV = 45.0f, m_NearCp = 0.01f, m_FarCp = 300.0f;
        std::unique_ptr<ngl::Obj> radioMesh;
        std::unique_ptr<ngl::Obj> switchMesh;
        std::unique_ptr<ngl::Obj> metalMesh;
        std::unique_ptr<ngl::Obj> plasticMesh;
        ngl::ShaderLib* shader;

        //from light view
        ngl::Mat4 m_lightCameraView;
        ngl::Mat4 m_lightCameraProject;
        ngl::Vec3 m_lightPosition;

        //FBO
        GLuint m_textureID;
        GLuint m_fboID;

};

#endif // TOONSCENE_H

///Based on code examples from Jon Macey and Richard Southern

#include "ToonScene.h"
#include <iostream>
#include <ngl/NGLInit.h>
#include <ngl/VAOPrimitives.h>
#include <ngl/Image.h>
#include <ngl/Texture.h>
#include <iostream>

ToonScene::ToonScene(QWidget *parent) : QOpenGLWidget(parent) //constructor
{
    setFocus(); //set focus to this window
    this->resize(parent->size()); //resize the widget to the window
}

ToonScene::~ToonScene()=default;

void ToonScene::resizeGL(int width, int height)
{
    m_projection=ngl::perspective( m_FOV, static_cast<float>(width) /height, m_NearCp, m_FarCp );
    m_width = static_cast<int> ( width * devicePixelRatio() );
    m_height = static_cast<int> ( height * devicePixelRatio());
    glViewport(0,0,m_width,m_height);
}

bool ToonScene::createFramebufferObject()
{
    // create our FBO
    glGenFramebuffers(1, &m_fboID);
    glBindFramebuffer(GL_FRAMEBUFFER, m_fboID);

    // Try to use a texture depth component
    glGenTextures(1, &m_textureID);
    glBindTexture(GL_TEXTURE_2D, m_textureID);

    glTexImage2D(GL_TEXTURE_2D, 0,GL_DEPTH_COMPONENT, 2048, 2048, 0,GL_DEPTH_COMPONENT, GL_FLOAT, 0);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);


    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE );

    glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, m_textureID, 0);


    // disable the colour and read buffers as we only want depth
    glDrawBuffer(GL_NONE);

    // attach our texture to the FBO


    if(glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        return false;
    else return true;
    // switch back to window-system-provided framebuffer

}



void ToonScene::initializeGL()
{
    ngl::NGLInit::instance(); //initialize NGL
    glClearColor(0.1f, 0.1f, 0.1f, 0.1f);
    glEnable(GL_DEPTH_TEST); //depth test and multisampling for drawing
    glEnable(GL_MULTISAMPLE);

    m_lightPosition = ngl::Vec3(0.2, 4.5, 3);

    //load meshes
    radioMesh.reset(new ngl::Obj("models/radio.obj"));
    radioMesh->createVAO();
    switchMesh.reset(new ngl::Obj("models/Switch.obj"));
    switchMesh->createVAO();
    metalMesh.reset(new ngl::Obj("models/metalPart.obj"));
    metalMesh->createVAO();
    plasticMesh.reset(new ngl::Obj("models/blackPlastic.obj"));
    plasticMesh->createVAO();
    ngl::VAOPrimitives::instance()->createLineGrid("grid",20,20,20);
    ngl::VAOPrimitives::instance()->createTrianglePlane("table",20,20,1,1,ngl::Vec3::up());

    //load Toony shaders
    shader = ngl::ShaderLib::instance();
    shader->loadShader("Toony",
                       "shaders/ToonVert.glsl",
                       "shaders/ToonFrag.glsl");
    //load shadow shader
    shader->loadShader("Shadow",
                       "shaders/ShadowVert.glsl",
                       "shaders/ShadowFrag.glsl");

    //default camera settings
    look = ngl::Vec3(0.0f, 0.0f, 0.0f);
    up = ngl::Vec3(0.0f, 1.0f, 0.0f);

    glViewport(0,0,m_width,m_height);

    // load and set a texture for the colour


    ngl::Texture t("textures/radio_BaseColor.png");
    t.setMultiTexture(0);
    t.setTextureGL();
    glGenerateMipmap(GL_TEXTURE_2D);
    shader->use("Toony");
    shader->setUniform("diffuseMap",0);
    // now one for the specular map
    ngl::Texture spec;
    spec.setMultiTexture(1);
    spec.setTextureGL();

    //FBO for shadow map
    if(createFramebufferObject())
    {std::cout << "Frame Buffer failed.\n";}
    else std::cout <<"Frame Buffer succeeded!\n";




}


void ToonScene::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
    glEnable(GL_CULL_FACE);

    //model
    m_transform.setPosition(radio.Translate);
    m_transform.setRotation(radio.Rotate);
    m_transform.setScale(radio.Scale);
    m_model = m_transform.getMatrix();
    auto obj = ngl::VAOPrimitives::instance();



    //shadow frame buffer object
    glBindFramebuffer(GL_FRAMEBUFFER,m_fboID);
    glViewport(0.0f,0.0f,2048,2048);
    glClear( GL_DEPTH_BUFFER_BIT);
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
    glCullFace(GL_FRONT);

    //view of light

    shader->use("Shadow");

    m_lightCameraProject=ngl::ortho(-10,10,-10,10,-10,20);
    m_lightCameraView = ngl::lookAt(m_lightPosition, ngl::Vec3(0.0f,0.0f,0.0f), ngl::Vec3::up());
    //draw the scene from the light PoV

    MVP = m_lightCameraProject * m_lightCameraView * m_transform.getMatrix();
    shader->setUniform("MVP",MVP);
    radioMesh->draw();
    switchMesh->draw();
    metalMesh->draw();
    plasticMesh->draw();

    m_model.translate(0.0f, -1.3f, 0.0f);
    MVP = m_lightCameraProject * m_lightCameraView * m_model;
    shader->setUniform("MVP",MVP);
    obj->draw("table");

    glBindFramebuffer(GL_FRAMEBUFFER,defaultFramebufferObject());
    glViewport(0,0,m_width,m_height);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);

    //bind shadow texture
    glBindTexture(GL_TEXTURE_2D,m_textureID);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC, GL_LEQUAL);

    glCullFace(GL_BACK);

    // update our camera

    camera.right = ngl::Vec3(-cos(camera.horizontalAngle),0.0f,sin(camera.horizontalAngle));
    camera.direction = ngl::Vec3(cos(camera.verticalAngle) * sin(camera.horizontalAngle),
                                 sin(camera.verticalAngle),
                                 cos(camera.verticalAngle) * cos(camera.horizontalAngle));
    up.cross(camera.right, camera.direction);
    eye = look + camera.direction * camera.distance;
    m_view=ngl::lookAt(eye,look,up);
    m_projection=ngl::perspective(m_FOV, //fov
                               float(m_width/m_height), //width/height
                               m_NearCp, //near cp
                               m_FarCp); //far cp

    //draw a grid
    MVP = m_projection * m_view * ngl::Mat4(); //calculate camera view
    shader->use(ngl::nglColourShader);
    shader->setUniform("MVP",MVP);
    shader->setUniform("Colour", ngl::Vec4(0.5f, 0.5f, 0.5f, 1.0f));
    obj->draw("grid");

    //draw our radio and table with Toon Shader
    shader->use("Toony");
    //attach depth map to shader
    shader->setUniform("depthTex", static_cast<int>(m_fboID));
    ngl::Mat4 bias;
    bias.scale(0.5,0.5,0.5);
    bias.translate(0.5,0.5,0.5);
    ngl::Mat4 lightMatrix = bias * m_lightCameraProject * m_lightCameraView * m_transform.getMatrix();

    shader->setUniform("is_table", false);
    shader->setUniform("M",  m_transform.getMatrix());
    shader->setUniform("V", m_view);
    shader->setUniform("P", m_projection);
    shader->setUniform("lightMatrix", lightMatrix);

    shader->setUniform("is_specular", true);
    shader->setUniform("Specular", 0.2f);
    shader->setUniform("Shininess", 0.2f);
    switchMesh->draw();

    shader->setUniform("Specular", 2.0f);
    shader->setUniform("Shininess", 0.15f);
    metalMesh->draw();

    shader->setUniform("Specular", 0.6f);
    shader->setUniform("Shininess", 0.8f);
    plasticMesh->draw();

    shader->setUniform("is_specular", false);
    radioMesh->draw();

    shader->setUniform("is_table", true);
    shader->setUniform("is_specular", false);
    m_model = ngl::Mat4();
    m_model.translate(0.0f, -1.3f, 0.0f);
    shader->setUniform("M", m_model);
    lightMatrix = bias * m_lightCameraProject * m_lightCameraView * m_model;
    shader->setUniform("lightMatrix", lightMatrix);
    shader->setUniform("Specular", 0.0f);
    shader->setUniform("Shininess", 0.0f);
    obj->draw("table");
    glBindTexture(GL_TEXTURE_2D, 0);


    glViewport(0.0f,0.0f,m_width,m_height);

}



/*-------------------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------------------*/


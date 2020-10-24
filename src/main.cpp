#include <QApplication>
#include "Mainwindow.h"

int main(int argc, char *argv[])
{


    QApplication app(argc, argv);

    QSurfaceFormat format;
    //set number of samples for multisampling
    format.setSamples(4);
    format.setMajorVersion(4);
    format.setMinorVersion(3);
    std::cout << "Profile is " << format.majorVersion() << " " << format.minorVersion() << "\n";
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    MainWindow window;
    window.show();

    return app.exec();
}

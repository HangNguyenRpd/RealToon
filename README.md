# Toon Shading project written in OpenGL 4.x and GLSL 430 core, use NGL 7

# GUI built with Qt4
    Sometimes there are version difference in QtGUI and Qt does not compile UI files, simply run qmake and rebuild the project.

# Build the project with qmake, ideally compile with clang++ (g++ should also work fine):
        With QtCreator: please choose non-debug mode and uncheck Shadow Build, click Run
        On command line: go into the project's directory
                            -> qmake
                            -> make
                            -> ./realToon.exe

# Must link Qt library to System Environment to run the executable file outside Qt


![alt text](https://github.com/HangNguyenRpd/RealToon/blob/main/images/Radio_executable.png?raw=true)

RealToon emulates the hand-drawn feel composed of simple 2D animation shading and pencil scribbles, inspired by the artwork of (GOBELINS « LA CHINE A L’HONNEUR »)[https://vimeo.com/220870792].

#BUILD INSTRUCTIONS:

Toon Shading project written in OpenGL 4.x and GLSL 430 core, use NGL 7

1. Link NGL to the project by installing the library from https://github.com/NCCA/NGL and add the NGL directory to your Environment variables as NGLDIR

2. GUI built with Qt
    Sometimes there are version difference in QtGUI and Qt does not compile UI files, simply run qmake and rebuild the project.

3. Build the project with qmake, ideally compile with clang++ (g++ should also work fine):
        With QtCreator: please choose non-debug mode and uncheck Shadow Build, click Run
        On command line: go into the project's directory
                            -> qmake
                            -> make
                            -> ./realToon.exe

4. Must link Qt library to System Environment to run the executable file outside Qt


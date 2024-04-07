#include "MainWindow.h"
#include <QtWidgets/QApplication>
//code from
//https://www.bilibili.com/video/BV1N14y1N7q5/

/*
//head
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\inc
//lib
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\win64\vc14\lib
//dll add PATH=
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\win64\vc14\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\tbb_2017.0.100\bin\intel64\vc12;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\qt5.11.2-vc14-64\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\openvr-1.14.15-64\bin\win64;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\vtk-6.1.0-vc14-64\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\tcltk-86-64\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\freeimage-3.17.0-vc14-64\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\ffmpeg-3.3.4-64\bin;
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\freetype-2.5.5-vc14-64\bin;

//open model
D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\data
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWindow w;
	
    w.show();
    return a.exec();
}

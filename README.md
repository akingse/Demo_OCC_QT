# Demo_OCC_QT_sln

[代码源](https://www.bilibili.com/video/BV1N14y1N7q5/)

### 项目版本

occ7.6.0+vs2022+qt5.12.12

[occ](https://dev.opencascade.org/release) 下载历史版本，7.6.0版本是exe文件，可直接安装；

qt5.12 [官网](https://www.qt.io/offline-installers) [安装包](https://download.qt.io/archive/qt/5.12/5.12.12/qt-opensource-windows-x86-5.12.12.exe)

vs2022 需安装插件(Qt visual studio tools)，并设置verison qt5.12的Path；

### 项目配置

添加依赖，[head](D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\inc)和[lib](D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\win64\vc14\lib)，本项目使用了绝对路径；

动态库加载 [dll](D:\Alluser\akingse\TPL\OpenCASCADE-7.6.0-vc14-64\opencascade-7.6.0\win64\vc14\bin)，path添加vc14目录下的所有子目录，详见main.cpp；
#ifndef SIZE_H
#define SIZE_H

#include "mainwindow.h"

class Size : public MainWindow
{
public:
    Size();
    void zoom_in(int width, int height);
    void zoom_out(int width, int height);
    int height;
    int width;
};

#endif // SIZE_H

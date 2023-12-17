#include "size.h"

Size::Size()
{

}

void Size::zoom_in(int width, int height)
{
    if (width < 0 || height < 0) throw 1;
    this->width = int(width * 1.25);
    this->height = int(height * 1.25);
}

void Size::zoom_out(int width, int height)
{
    if (width < 0 || height < 0) throw 1;
    this->width = int(width * 0.75);
    this->height = int(height * 0.75);
}

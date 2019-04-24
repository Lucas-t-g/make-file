#include "point2d.h"
#include <iostream>

point2D :: point2D(int _x, int _y) : x(_x), y(_y) {}

void point2D::print(){
    std::cout << "point2D: (" << x << ", " << y << ")\n";
}
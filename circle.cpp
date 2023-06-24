#include "circle.h"
#include <iostream>

using namespace std;

Circle::Circle(float r) {
    radius = r;
}

float Circle::getArea() {
    return radius*radius*PI;
}

void Circle::print() {
    cout << "radius: " << radius << endl;
}
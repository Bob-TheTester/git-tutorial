#include "circle.h"
#include <iostream>

using namespace std;

Circle::Circle() {
    radius = 0.0f;
}
Circle::Circle(float r) {
    radius = r;
}

float Circle::getArea() {
    return radius*radius*PI;
}

float Circle::getRadius() {
    return radius;
}

void Circle::print() {
    cout << "radius: " << radius << endl;
}
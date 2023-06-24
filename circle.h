#pragma once

#define PI 3.1415

class Circle {
protected: 
    float radius;
public: 
    Circle();
    Circle(float r);
    float getRadius();
    void print();
    float getArea();       
};
#pragma once

#define PI 3.1415

class Circle {
protected: 
        float radius;
public: 
    Circle(float r);
    void print();
    float getArea();       
};
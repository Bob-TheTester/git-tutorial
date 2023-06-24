#include <iostream>
#include "circle.h"

using namespace std;

// Unit test for class Circle
void testCircle() {
	Circle c1(5.0);
	c1.print();     // expected 25*3.1415 ~ xyz
	Circle c2(6.0);
	c2.print();
}


int main(int)
{
	//cout << "Hello, world" << endl;
	//cout << "Hey, is it C or C++ ?" << endl;
	testCircle();
}

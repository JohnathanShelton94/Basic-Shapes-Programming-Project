#include "BasicShape.h"
#include <cmath>

#ifndef M_PI // I Added This to define PI since I kept getting an error
    #define M_PI 3.14159265358979323846
#endif

    // BasicShape Implementations
void BasicShape::setArea(double a) { area = a; }
double BasicShape::getArea() const { return area; }

void BasicShape::setName(string n) { name = n; }
string BasicShape::getName() const { return name; }

    // Circle Implementations
Circle::Circle(int x, int y, double r, string n) : xCenter(x), yCenter(y), radius(r) {
    setName(n);
    calcArea();
}

int Circle::getXCenter() const { return xCenter; }
int Circle::getYCenter() const { return yCenter; }
double Circle::getRadius() const { return radius; }

void Circle::calcArea() {
    setArea(M_PI * radius * radius);
}

    // Rectangle Implementations
Rectangle::Rectangle(double l, double w, string n) : length(l), width(w) {
    setName(n);
    calcArea();
}

double Rectangle::getLength() const { return length; }
double Rectangle::getWidth() const { return width; }

void Rectangle::calcArea() {
    setArea(length * width);
}

    // Square Implementations
Square::Square(double s, string n) : Rectangle(s, s, n), side(s) {
    setName(n);
}

double Square::getSide() const { return side; }

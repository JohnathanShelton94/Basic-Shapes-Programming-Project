#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

    // Base class
class BasicShape {
private:
    double area;
    string name;

public:
    void setArea(double a);
    double getArea() const;

    void setName(string n);
    string getName() const;

    virtual void calcArea() = 0; // Pure virtual function
    virtual ~BasicShape() {}
};

    // Circle
class Circle : public BasicShape {
private:
    int xCenter, yCenter;
    double radius;

public:
    Circle(int x, int y, double r, string n = "Circle");
    int getXCenter() const;
    int getYCenter() const;
    double getRadius() const;
    void calcArea() override;
};

    // Rectangle
class Rectangle : public BasicShape {
private:
    double length, width;

public:
    Rectangle(double l, double w, string n = "Rectangle");
    double getLength() const;
    double getWidth() const;
    void calcArea() override;
};

    // Square
class Square : public Rectangle {
private:
    double side;

public:
    Square(double s, string n = "Square");
    double getSide() const;
};

#endif  // BASICSHAPE_H

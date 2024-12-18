// Basic Shapes Programming Project.cpp : This file contains the 'main' function of the Basic Shapes Project


#include "BasicShape.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
        // Array of BasicShape pointers
    vector<BasicShape*> shapes;

        // Add two Rectangle objects
    shapes.push_back(new Rectangle(4.0, 5.0, "Rectangle 1"));
    shapes.push_back(new Rectangle(3.0, 6.0, "Rectangle 2"));

        // Add two Circle objects
    shapes.push_back(new Circle(0, 0, 3.0, "Circle 1"));
    shapes.push_back(new Circle(2, 2, 4.0, "Circle 2"));

        // Add one Square object
    shapes.push_back(new Square(4.0, "Square 1"));

        // Display each shape's name and area
    cout << "Shape Details:\n";
    cout << "--------------------------------\n";
    for (auto shape : shapes) {
        cout << "Shape: " << shape->getName() << "\n";
        cout << "Area: " << shape->getArea() << "\n";
        cout << "--------------------------------\n";
    }

        // Free allocated memory
    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}

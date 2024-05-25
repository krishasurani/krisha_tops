// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading 
// Rectangle: Area * 
// breadth Triangle: ½ 
// *Area* breadth Circle: 
// Pi * Area *Area

#include <iostream>
using namespace std;

const double Pi = 3.14159265358979323846;

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char triangle) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateArea(double radius, char circle) {
    return Pi * radius * radius;
}

int main() {
    double length, breadth, base, height, radius;

    // Area of Rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculateArea(length, breadth) << endl;

    // Area of Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculateArea(base, height, 'T') << endl;

    // Area of Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculateArea(radius, 'C') << endl;

    return 0;
}

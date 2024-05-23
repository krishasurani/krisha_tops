// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading 
// Rectangle: Area * 
// breadth Triangle: ½ 
// *Area* breadth Circle: 
// Pi * Area *Area

#include <iostream>

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
    std::cout << "Enter length and breadth of rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Area of Rectangle: " << calculateArea(length, breadth) << std::endl;

    // Area of Triangle
    std::cout << "Enter base and height of triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of Triangle: " << calculateArea(base, height, 'T') << std::endl;

    // Area of Circle
    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    std::cout << "Area of Circle: " << calculateArea(radius, 'C') << std::endl;

    return 0;
}

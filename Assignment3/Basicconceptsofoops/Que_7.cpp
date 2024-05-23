//Write a C++ program to create a class called Rectangle that has private member variables for length and 
//width. Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>

class Rectangle {
private:
  double length;
  double width;

public:
  // Constructor to initialize rectangle with length and width
  Rectangle(double len, double wid) : length(len), width(wid) {
    // Optional: Add error handling for negative values here (if needed)
  }

  // Calculate and return the area of the rectangle
  double calculateArea() {
    return length * width;
  }

  // Calculate and return the perimeter of the rectangle
  double calculatePerimeter() {
    return 2 * (length + width);
  }
};

int main() {
  double length, width;

  std::cout << "Enter the length of the rectangle: ";
  std::cin >> length;

  std::cout << "Enter the width of the rectangle: ";
  std::cin >> width;

  Rectangle rectangle(length, width); // Create a Rectangle object

  std::cout << "Area: " << rectangle.calculateArea() << std::endl;
  std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

  return 0;
}

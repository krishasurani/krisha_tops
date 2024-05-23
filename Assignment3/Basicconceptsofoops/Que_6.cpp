//Write a C++ program to implement a class called Circle that has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath> // For M_PI constant

class Circle {
private:
  double radius;

public:
  // Constructor to initialize the circle with a radius
  Circle(double rad) : radius(rad) {
    if (radius < 0) {
      std::cout << "Error: Radius cannot be negative. Setting radius to 0." << std::endl;
      radius = 0;
    }
  }

  // Calculate and return the area of the circle
  double calculateArea() {
    return M_PI * pow(radius, 2);
  }

  // Calculate and return the circumference of the circle
  double calculateCircumference() {
    return 2 * M_PI * radius;
  }
};

int main() {
  double radius;

  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  Circle circle(radius); // Create a Circle object

  std::cout << "Area: " << circle.calculateArea() << std::endl;
  std::cout << "Circumference: " << circle.calculateCircumference() << std::endl;

  return 0;
}

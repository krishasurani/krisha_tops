//Write a C++ program to implement a class called Circle that has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath> 
using namespace std;

class Circle {
private:
  double radius;

public:
  
  Circle(double rad) : radius(rad) {
    if (radius < 0) {
      cout << "Error: Radius cannot be negative. Setting radius to 0." << endl;
      radius = 0;
    }
  }

  
  double calculateArea() {
    return M_PI * pow(radius, 2);
  }

  
  double calculateCircumference() {
    return 2 * M_PI * radius;
  }
};

int main() {
  double radius;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  Circle circle(radius); 

  cout << "Area: " << circle.calculateArea() << endl;
  cout << "Circumference: " << circle.calculateCircumference() << endl;

  return 0;
}

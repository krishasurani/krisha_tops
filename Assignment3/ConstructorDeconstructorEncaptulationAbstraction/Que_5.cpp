//Write a C++ program to create a class called Triangle that has private member variables for the lengths 
//its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or 
//scalene.
#include <iostream>
#include <cmath> // for abs() function
using namespace std;

class Triangle {
public:
  // Constructor to initialize sides
  Triangle(double side1, double side2, double side3) :
      side1(side1), side2(side2), side3(side3) {
    // Validate triangle inequality (sum of any two sides must be greater than the third)
    if (!isValidTriangle()) {
      side1 = side2 = side3 = -1.0; // Set invalid values if triangle is not valid
    }
  }

  // Function to check if triangle is valid (follows triangle inequality)
  bool isValidTriangle() const {
    return (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1);
  }

  // Function to determine triangle type
  string getTriangleType() const {
    if (!isValidTriangle()) {
      return "Invalid Triangle";
    } else if (abs(side1 - side2) < 1e-6 && abs(side1 - side3) < 1e-6) {
      // Use a small tolerance to account for floating-point precision errors
      return "Equilateral Triangle";
    } else if (abs(side1 - side2) < 1e-6 || abs(side2 - side3) < 1e-6 || abs(side1 - side3) < 1e-6) {
      return "Isosceles Triangle";
    } else {
      return "Scalene Triangle";
    }
  }

private:
  double side1;
  double side2;
  double side3;
};

int main() {
  
  Triangle triangle1(3, 3, 3);
  Triangle triangle2(4, 4, 5);
  Triangle triangle3(5, 7, 8);
  Triangle invalidTriangle(1, 1, 3); 

  cout << "Triangle 1: " << triangle1.getTriangleType() << endl;
  cout << "Triangle 2: " << triangle2.getTriangleType() << endl;
  cout << "Triangle 3: " << triangle3.getTriangleType() << endl;
  cout << "Invalid Triangle: " << invalidTriangle.getTriangleType() << endl;

  return 0;
}

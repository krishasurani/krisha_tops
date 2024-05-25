//Write a C++ program to create a class called Rectangle that has private member variables for length and 
//width. Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
  
  Rectangle(double len, double wid) : length(len), width(wid) {
    
  }

  
  double calculateArea() {
    return length * width;
  }

  
  double calculatePerimeter() {
    return 2 * (length + width);
  }
};

int main() {
  double length, width;

  cout << "Enter the length of the rectangle: ";
  cin >> length;

  cout << "Enter the width of the rectangle: ";
  cin >> width;

  Rectangle rectangle(length, width); 

  cout << "Area: " << rectangle.calculateArea() << endl;
  cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

  return 0;
}

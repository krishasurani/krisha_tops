//Write a C++ Program to find Area of Rectangle using inheritance 

#include <iostream>

using namespace std;

class Shape {
public:
    virtual void getDimensions() {
    }

    virtual void calculateArea() {
    }

    virtual void displayArea() {
    }
};

class Rectangle : public Shape {
public:
    float length;
    float width;

    void getDimensions() override {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void calculateArea() override {
        area = length * width;
    }

    void displayArea() override {
        cout << "Area of rectangle: " << area << endl;
    }

private:
    float area;  
};

int main() {
    Rectangle rect;

    rect.getDimensions();
    rect.calculateArea();
    rect.displayArea();

    return 0;
}

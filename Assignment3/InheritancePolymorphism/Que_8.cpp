//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two 
//number using different parameters and Function Overloading 

#include <iostream>

using namespace std;

// Function prototypes (optional, but good practice)
int add(int a, int b);
double add(double a, double b);
int subtract(int a, int b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int int_a, int_b;
    double double_a, double_b;

    cout << "Enter two integers for integer operations: ";
    cin >> int_a >> int_b;

    cout << "Enter two floating-point numbers for floating-point operations: ";
    cin >> double_a >> double_b;

    // Integer operations
    cout << int_a << " + " << int_b << " = " << add(int_a, int_b) << endl;
    cout << int_a << " - " << int_b << " = " << subtract(int_a, int_b) << endl;

    // Floating-point operations
    cout << double_a << " + " << double_b << " = " << add(double_a, double_b) << endl;
    cout << double_a << " - " << double_b << " = " << subtract(double_a, double_b) << endl;
    cout << double_a << " * " << double_b << " = " << multiply(double_a, double_b) << endl;

    // Division with proper handling (consider using exceptions for robustness)
    if (double_b == 0) {
        cout << "Error: Division by zero." << endl;
    } else {
        cout << double_a << " / " << double_b << " = " << divide(double_a, double_b) << endl;
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

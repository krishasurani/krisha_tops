//Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
    cout << "Cube of " << num1 << " is: " << cube(num1) << endl;

}

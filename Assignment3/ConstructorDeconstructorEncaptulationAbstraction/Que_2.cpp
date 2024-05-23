//Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include <iostream>

using namespace std;

class Calculator {
public:
    Calculator(int num1 = 0, int num2 = 0) : firstNumber(num1), secondNumber(num2) {} // Initialize with default values

    int add() {
        return firstNumber + secondNumber;
    }

    int subtract() {
        return firstNumber - secondNumber;
    }

    double divide() {
        if (secondNumber == 0) {
            cout << "Error: Division by zero!" << endl;
            return -1.0; // Or throw an exception for robust error handling
        }
        return (double)firstNumber / secondNumber; // Cast to double for floating-point division
    }

    int multiply() {
        return firstNumber * secondNumber;
    }

private:
    int firstNumber;
    int secondNumber;
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2); // Create Calculator object with values

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Division: " << calc.divide() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

}

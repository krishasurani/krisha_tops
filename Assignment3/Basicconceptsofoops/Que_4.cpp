//WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator {
public:
  double num1, num2;
  char operation;

  void getNumbers() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
  }

  void getOperation() {
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
  }

  double calculate() {
    switch (operation) {
      case '+':
        return num1 + num2;
      case '-':
        return num1 - num2;
      case '*':
        return num1 * num2;
      case '/':
        if (num2 == 0) {
          cout << "Error: Division by zero!" << endl;
          return 0; 
        }
        return num1 / num2;
      default:
        cout << "Invalid operation!" << endl;
        return 0;
    }
  }
};

int main() {
  Calculator calc;

  calc.getNumbers();
  calc.getOperation();

  double result = calc.calculate();

  if (result != 0) {
    cout << "Result: " << calc.num1 << " " << calc.operation << " " << calc.num2 << " = " << result << endl;
  }

  return 0;
}

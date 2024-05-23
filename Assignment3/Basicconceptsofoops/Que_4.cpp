//WAP to create simple calculator using class 

#include <iostream>

class Calculator {
public:
  double num1, num2;
  char operation;

  void getNumbers() {
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
  }

  void getOperation() {
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
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
          std::cout << "Error: Division by zero!" << std::endl;
          return 0; // Handle division by zero or throw an exception
        }
        return num1 / num2;
      default:
        std::cout << "Invalid operation!" << std::endl;
        return 0;
    }
  }
};

int main() {
  Calculator calc;

  calc.getNumbers();
  calc.getOperation();

  double result = calc.calculate();

  if (result != 0) { // Check if there was an error
    std::cout << "Result: " << calc.num1 << " " << calc.operation << " " << calc.num2 << " = " << result << std::endl;
  }

  return 0;
}

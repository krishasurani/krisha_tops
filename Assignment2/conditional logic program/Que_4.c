//make simple calculator (operation include Addition,Subtraction,Multiplication,Division, modulo) using conditional statement

#include <stdio.h>

int main() {
  float num1, num2;
  char operator;

  printf("Enter the first number: ");
  scanf("%f", &num1);

  printf("Enter the operator (+, -, *, /, %%): ");
  scanf(" %c", &operator); 

  printf("Enter the second number: ");
  scanf("%f", &num2);

  float result;
  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
      } else {
        result = num1 / num2;
      }
      break;
    case '%':
      result = (int)num1 % (int)num2;  
      break;
    default:
      printf("Error: Invalid operator.\n");
  }

  if (operator != '/' || num2 != 0) {  
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
  }

  return 0;
}

//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>

int main() {
  int num, sum, first_digit, last_digit;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 10) {
    printf("Sum of first and last digits is only applicable for numbers with two or more digits.\n");
  } else {
    last_digit = num % 10;

    first_digit = num / (int)pow(10, floor(log10(num)));  

    sum = first_digit + last_digit;

    printf("Sum of first and last digits in %d: %d\n", num, sum);
  }

  return 0;
}

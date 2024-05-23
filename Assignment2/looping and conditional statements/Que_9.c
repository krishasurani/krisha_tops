//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main() {
  int num, sum_of_digits = 0, digit;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Sum of digits cannot be negative for negative numbers.\n");
  } else {
    while (num != 0) {
      digit = num % 10;
      sum_of_digits += digit;
      num /= 10;
    }

    printf("Sum of digits in %d: %d\n", num, sum_of_digits);
  }

  return 0;
}

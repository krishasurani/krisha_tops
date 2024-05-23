//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>
#include <math.h> 

int main() {
  int num, max_digit = 0, abs_num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  abs_num = abs(num); 

  while (abs_num > 0) {
    int digit = abs_num % 10;
    max_digit = fmax(max_digit, digit); 
    abs_num /= 10; 
  }

  if (num < 0) {
    printf("Maximum absolute digit in %d: -%d\n", num, max_digit);
  } else {
    printf("Maximum absolute digit in %d: %d\n", num, max_digit);
  }

  return 0;
}

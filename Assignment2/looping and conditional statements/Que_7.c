//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main() {
  int num, reversed = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Negative numbers are not supported.\n");
    return 1;
  }

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder; 
    num /= 10; 
  }

  printf("Reversed number: %d\n", reversed);

  return 0;
}

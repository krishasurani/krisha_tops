//WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int is_palindrome(int num) {
  int original_number = num;
  int reversed_number = 0, remainder;

  while (num != 0) {
    remainder = num % 10;
    reversed_number = reversed_number * 10 + remainder; 
    num /= 10; 
  }

  return original_number == reversed_number;
}

int main() {
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  if (is_palindrome(number)) {
    printf("%d is a palindrome number.\n", number);
  } else {
    printf("%d is not a palindrome number.\n", number);
  }

  return 0;
}

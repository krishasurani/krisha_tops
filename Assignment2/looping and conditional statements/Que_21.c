//Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>

int main() {
  int num, originalNum, remainder, reversedNum = 0;
  int count = 1;

  while (count <= 3) {
    printf("Enter number %d: ", count);
    scanf("%d", &num);

    originalNum = num;

    if (num < 0) {
      printf("%d is not a palindrome (negative numbers are not considered palindromes).\n", num);
      count++;
      continue; 
    }

    while (num != 0) {
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
      num /= 10;
    }

    if (originalNum == reversedNum) {
      printf("%d is a palindrome.\n", originalNum);
    } else {
      printf("%d is not a palindrome.\n", originalNum);
    }

    count++;
    reversedNum = 0; 
  }

  return 0;
}

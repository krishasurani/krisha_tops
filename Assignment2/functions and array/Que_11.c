//.WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

int main() {
  int numbers[5];

  printf("Enter 5 numbers:\n");
  for (int i = 0; i < 5; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  printf("\nNumbers in reverse order:\n");
  for (int i = 4; i >= 0; i--) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}

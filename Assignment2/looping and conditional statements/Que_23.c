//series program
//1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Input validation (optional)
  if (n <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1; 
  }

  for (int i = 1; i <= n; ++i) {
    sum += i;
  }

  printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum);

  return 0;
}

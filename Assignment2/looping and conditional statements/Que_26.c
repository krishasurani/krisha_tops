//series program
// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>

int main() {
  int n, i;
  double sum = 0.0; 

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1; 
  }

  for (i = 1; i <= n; ++i) {
    double term = (double)i / (i + 1);
    if (i % 2 == 1) { 
      sum += term;
    } else { 
      sum -= term;
    }
  }

  printf("The sum of the alternating series 1/2 - 2/3 + ... + %d/%d is: %.2lf\n", n, n+1, sum);

  return 0;
}

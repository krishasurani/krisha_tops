//series program
//1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
  int n, i;
  long long int term = 1; 

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1; 
  }

  printf("Series: ");
  for (i = 1; i <= n; ++i) {
    printf("%lld ", term);
    if (i % 2 == 0) { 
      term *= 3;
    } else { 
      term *= 2;
    }
  }
  printf("\n");

  return 0;
}

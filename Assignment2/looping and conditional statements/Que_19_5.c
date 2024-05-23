//A
//B C
//D E F
//G H I J 
//K L M N O
#include <stdio.h>

int main() {
  int rows = 5;
  char letter = 'A';
  int i, j;

  for (i = 1; i <= rows; ++i) {
    for (j = 1; j <= i; ++j) {
      printf("%c ", letter);
      letter++;
    }
    printf("\n");
  }

  return 0;
}
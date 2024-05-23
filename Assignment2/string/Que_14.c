//14.Write a program in C to combine two strings manually

#include <stdio.h>

int main() {
  char str1[100], str2[100], combined[200];
  int i, j;

  printf("\n\nCombine two strings manually :\n");
  printf("---------------------------------\n");

  printf("Input the first string: ");
  fgets(str1, sizeof str1, stdin);

  printf("Input the second string: ");
  fgets(str2, sizeof str2, stdin);

  str1[strcspn(str1, "\n")] = '\0';

  i = 0;
  while (str1[i] != '\0') {
    i++;
  }

  for (j = 0; str1[j] != '\0'; j++) {
    combined[j] = str1[j];
  }

  for (j = 0; str2[j] != '\0'; j++) {
    combined[i + j] = str2[j];
  }

  combined[i + j] = '\0';

  printf("The combined string is: %s\n", combined);

  return 0;
}

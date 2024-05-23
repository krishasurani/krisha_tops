//Write a program in C to extract a substring from a given string

#include <stdio.h>

int main() {
  char str[100], sstr[100];
  int pos, len, c = 0;

  printf("\n\nExtract a substring from a given string:\n");
  printf("--------------------------------------------\n");

  printf("Input the string: ");
  fgets(str, sizeof str, stdin);

  printf("Input the position to start extraction (starting from 0): ");
  scanf("%d", &pos);

  printf("Input the length of substring: ");
  scanf("%d", &len);

  if (pos < 0 || pos >= strlen(str) || len < 0 || pos + len > strlen(str)) {
    printf("Invalid input! Start position or length is out of bounds.\n");
    return 1;
  }

  while (c < len) {
    sstr[c] = str[pos + c];
    c++;
  }
  sstr[c] = '\0'; 

  printf("The substring retrieved from the string is: \"%s\" \n\n", sstr);

  return 0;
}

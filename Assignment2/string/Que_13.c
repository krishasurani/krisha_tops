//Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

void remove_non_alphabetic(char str[]) {
  int j = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      str[j++] = str[i];
    }
  }
  str[j] = '\0'; 
}

int main() {
  char str[100];

  printf("\n\nRemove characters from a string except alphabets :\n");
  printf("-------------------------------------------------\n");

  printf("Input the string: ");
  fgets(str, sizeof str, stdin);

  printf("String before removing non-alphabetic characters: %s\n", str);

  remove_non_alphabetic(str);

  printf("String after removing non-alphabetic characters: %s\n", str);

  return 0;
}

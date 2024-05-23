//WAP Find out length of string without using inbuilt function

#include <stdio.h>

int string_length(char str[]) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

int main() {
  char str[100];
  int length;

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  str[strcspn(str, "\n")] = '\0';

  length = string_length(str);
  printf("The length of the string is: %d\n", length);

  return 0;
}

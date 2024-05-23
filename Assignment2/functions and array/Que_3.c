//WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h> // For strlen

void reverse_string(char str[]) {
  int len = strlen(str);
  if (len <= 1) {
    return;
  }

  // Swap first and last characters
  char temp = str[0];
  str[0] = str[len - 1];
  str[len - 1] = temp;

  // Recursively reverse remaining substring (excluding first and last characters)
  reverse_string(str + 1);
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  str[strcspn(str, "\n")] = '\0';

  printf("Original string: %s\n", str);
  reverse_string(str);
  printf("Reversed string: %s\n", str);

  return 0;
}

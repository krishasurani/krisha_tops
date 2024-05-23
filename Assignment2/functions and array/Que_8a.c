// WAP to reverse a string and check that the string is palindrome or not
// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// andage

#include <stdio.h>
#include <string.h> // For strlen

int is_palindrome(char text[]) {
  int len = strlen(text);
  for (int i = 0; i < len / 2; i++) {
    if (text[i] != text[len - 1 - i]) {
      return 0; // Not a palindrome
    }
  }
  return 1; // Palindrome
}

void reverse_string(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  // Remove trailing newline from fgets
  str[strcspn(str, "\n")] = '\0';

  printf("Original string: %s\n", str);

  reverse_string(str);
  printf("Reversed string: %s\n", str);

  if (is_palindrome(str)) {
    printf("%s is a palindrome.\n", str);
  } else {
    printf("%s is not a palindrome.\n", str);
  }

  return 0;
}

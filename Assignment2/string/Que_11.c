//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main() {
  char str[100];
  int i;

  printf("\n\nReplace lowercase characters by uppercase and vice versa :\n");
  printf("--------------------------------------------------------------\n");

  printf("Input the string : ");
  fgets(str, sizeof str, stdin);

  printf("The given sentence is : %s", str);

  for (i = 0; str[i] != '\0'; i++) {
    if (islower(str[i])) {
      str[i] = toupper(str[i]);
    } else if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    }
  }

  printf("After changing the case, the string is: %s\n", str);

  return 0;
}

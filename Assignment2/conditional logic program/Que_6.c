//Character Is Vowel or Not

#include <stdio.h>
#include <ctype.h> // for toupper() function

int main() {
  char ch;

  printf("Enter an alphabet: ");
  scanf(" %c", &ch); 

  ch = toupper(ch); 

  if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    printf("%c is a vowel.\n", ch);
  } else if (isalpha(ch)) {  
    printf("%c is a consonant.\n", ch);
  } else {
    printf("Invalid input. Please enter an alphabet.\n");
  }

  return 0;
}

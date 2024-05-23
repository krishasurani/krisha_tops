//Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int count_occurrences(const char *str, const char *word)
 {
  int count = 0;
  int len_word = strlen(word);

  for (int i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] == word[0])
    {
      if (strncmp(str + i, word, len_word) == 0)
      {
        count++; 
        i += len_word - 1; 
      }
    }
  }

  return count;
}

int main() {
  char str[100];
  int num_occurrences;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  num_occurrences = count_occurrences(str, "is");

  printf("The word 'is' appears %d times in the string.\n", num_occurrences);

  return 0;
}

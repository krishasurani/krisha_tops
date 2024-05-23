//Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_largest_smallest(const char *str, char *largest, char *smallest, int max_len) {
  int current_word_len = 0;
  int is_first_word = 1;

  largest[0] = '\0';
  smallest[0] = '\0';

  for (int i = 0; str[i] != '\0'; i++) {
    if (isalnum(str[i])) {
      current_word_len++;
    } else if (current_word_len > 0) {
      if (is_first_word || current_word_len > strlen(largest)) {
        strncpy(largest, str + i - current_word_len, current_word_len);
        largest[current_word_len] = '\0';
      }
      if (is_first_word || current_word_len < strlen(smallest) || strlen(smallest) == 0) {
        strncpy(smallest, str + i - current_word_len, current_word_len);
        smallest[current_word_len] = '\0';
      }
      current_word_len = 0;
      is_first_word = 0;
    }
  }

  if (current_word_len > 0) {
    if (current_word_len > strlen(largest)) {
      strncpy(largest, str + strlen(str) - current_word_len, current_word_len);
      largest[current_word_len] = '\0';
    }
    if (current_word_len < strlen(smallest) || strlen(smallest) == 0) {
      strncpy(smallest, str + strlen(str) - current_word_len, current_word_len);
      smallest[current_word_len] = '\0';
    }
  }
}

int main() {
  char str[100], largest[50], smallest[50];

  printf("\n\nFind the largest and smallest words in a string:\n");
  printf("-------------------------------------------------\n");

  printf("Input the string: ");
  fgets(str, sizeof str, stdin);

  str[strcspn(str, "\n")] = '\0';

  find_largest_smallest(str, largest, smallest, sizeof(largest));

  if (strlen(largest) > 0) {
    printf("Largest word: %s\n", largest);
  } else {
    printf("No words found in the string (considering only alphanumeric characters).\n");
  }

  if (strlen(smallest) > 0) {
    printf("Smallest word: %s\n", smallest);
  } else {
    printf("No words found in the string (considering only alphanumeric characters).\n");
  }

  return 0;
}

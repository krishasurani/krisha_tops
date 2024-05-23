//Accept 5 names from user at run time.

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50 

int main() {
  char names[5][MAX_NAME_LENGTH + 1]; 
  for (int i = 0; i < 5; i++) {
    printf("Enter name %d: ", i + 1);
    fgets(names[i], MAX_NAME_LENGTH + 1, stdin);  

    names[i][strcspn(names[i], "\n")] = '\0'; 
  }

  printf("\nEntered names:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d. %s", i + 1, names[i]);
  }

  return 0;
}

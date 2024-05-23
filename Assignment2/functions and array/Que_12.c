//WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h> 

#define MAX_NAME_LENGTH 50 
int main() {
  char student_names[5][MAX_NAME_LENGTH]; 
  for (int i = 0; i < 5; i++) {
    printf("Enter name of student %d: ", i + 1);
    fgets(student_names[i], MAX_NAME_LENGTH, stdin);
    student_names[i][strcspn(student_names[i], "\n")] = '\0';
  }

  
  printf("\nStudent Names:\n");
  for (int i = 0; i < 5; i++) {
    printf("Student %d: %s\n", i + 1, student_names[i]);
  }

  return 0;
}

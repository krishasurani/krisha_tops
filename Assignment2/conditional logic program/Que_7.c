//Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
  int marks;
  float passing_marks; 

  printf("Enter the passing marks (out of 100): ");
  scanf("%f", &passing_marks);  

  printf("Enter the marks obtained: ");
  scanf("%d", &marks);

  if (marks >= 0 && marks <= 100) {  
    if (marks >= passing_marks) {
      printf("Pass\n");
    } else {
      printf("Fail\n");
    }
  } else {
    printf("Invalid marks. Please enter a value between 0 and 100.\n");
  }

  return 0;
}

//WAP to show difference between Structure and Union

#include <stdio.h>

struct Student {
  char name[50];
  int age;
  int roll_no;
};

union Data {
  int integer_value;
  float float_value;
  char string_value[20];
};

int main() {
 
  struct Student student;

  strcpy(student.name, "John Doe");
  student.age = 20;
  student.roll_no = 12345;

  printf("Student Information (Structure):\n");
  printf("Name: %s\n", student.name);
  printf("Age: %d\n", student.age);
  printf("Roll Number: %d\n\n", student.roll_no);

  union Data data;

  data.integer_value = 100;
  data.float_value = 3.14;
  printf("Data in Union:\n");
  printf("Integer value: %d\n", data.integer_value); 
  printf("Float value: %f\n", data.float_value);

  return 0; 
}

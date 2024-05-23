// WAP to reverse a string and check that the string is palindrome or not
// Write a program of structure employee that provides the following:
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage

#include <stdio.h>

struct Employee {
  int empno;
  char empname[50];
  char address[100];
  int age;
};

int main() {
  struct Employee emp;

  printf("Enter employee information:\n");
  printf("Employee number: ");
  scanf("%d", &emp.empno);

  printf("Employee name: ");
  scanf(" %[^\n]", emp.empname); 

  printf("Employee address: ");
  scanf(" %[^\n]", emp.address); 

  printf("Employee age: ");
  scanf("%d", &emp.age);

  printf("\nEmployee Details:\n");
  printf("Employee number: %d\n", emp.empno);
  printf("Employee name: %s\n", emp.empname);
  printf("Employee address: %s\n", emp.address);
  printf("Employee age: %d\n", emp.age);

  return 0;
}

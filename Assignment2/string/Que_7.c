//Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main() {
  char source[] = "Hello, world!";
  char destination[20]; 

  strcpy(destination, source);

  printf("Source string: %s\n", source);
  printf("Destination string: %s\n", destination);

  return 0;
}

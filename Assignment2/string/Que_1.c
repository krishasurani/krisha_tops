//Write a program in C to find the length of a string without using library functions.

#include <stdio.h>

int main() {
    char string[50];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(string, 50, stdin);

    for (i = 0; string[i] != '\0'; i++) {
        length++;
    }

    if (string[length - 1] == '\n') {
        length--;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

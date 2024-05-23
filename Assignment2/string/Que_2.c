//Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("The individual characters of the string are: \n");

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}

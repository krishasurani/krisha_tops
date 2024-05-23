//Write a C Program to Print the Multiplication Table of N


#include <stdio.h>

int main() {
    int number, i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Multiplication Table of %d:\n", number);

    printf("-----------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}

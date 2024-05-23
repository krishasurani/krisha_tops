//WAP to print factorial of given number

#include <stdio.h>

int main() {
    int num, i, fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("The factorial of %d is %d\n", num, fact);

    return 0; 
}

//calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;  

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
        return 1;  
    }

    i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}

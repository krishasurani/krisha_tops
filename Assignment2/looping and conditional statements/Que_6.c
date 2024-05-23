//WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, nextTerm;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printf("Fibonacci Series: ");

    printf("%d, %d, ", t1, t2);

    for (int i = 3; i <= num; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");

    return 0; 
}

//find number is even or odd using ternary operator

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ternary operator to check even or odd
    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);

    return 0;
}

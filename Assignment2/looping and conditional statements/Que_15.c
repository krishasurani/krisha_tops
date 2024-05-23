//Calculate sum of 10 numbers using while loop

#include <stdio.h>

int main() {
    int number, count = 1, sum = 0;

    printf("Enter 10 numbers:\n");

    while (count <= 10) {
        scanf("%d", &number);
        sum += number;
        count++;
    }

    printf("Sum of the 10 numbers: %d\n", sum);

    return 0;
}

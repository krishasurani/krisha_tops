//.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

int main() {
    int number, count = 1, even_count = 0, odd_count = 0;

    printf("Enter 5 numbers:\n");

    while (count <= 5) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        count++;
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}

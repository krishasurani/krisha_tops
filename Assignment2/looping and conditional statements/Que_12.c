//Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (; num != 0; ++n) {
        num /= 10;
    }

    num = originalNum;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}

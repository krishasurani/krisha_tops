//Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

int main() {
    int numbers[5], i, num;
    long long factorial;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        num = numbers[i];
        factorial = 1;

        for (int j = 1; j <= num; j++) {
            factorial *= j;
        }

        printf("  %d! = %lld\n", num, factorial);
    }

    return 0;
}

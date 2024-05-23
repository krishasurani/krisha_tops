//WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int num, limit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the limit (up to which to print the table): ");
    scanf("%d", &limit);

    printf("Table of %d:\n", num);

    printf("   | ");
    for (int i = 1; i <= limit; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("---|");
    for (int i = 0; i < limit * 2; i++) {
        printf("-");
    }
    printf("\n");

    for (int i = 1; i <= limit; i++) {
        printf("%2d | ", i);
        for (int j = 1; j <= limit; j++) {
            printf("%d ", num * j);
        }
        printf("\n");
    }

    return 0;
}

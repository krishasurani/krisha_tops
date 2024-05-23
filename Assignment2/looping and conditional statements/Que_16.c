//.Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int limit, num = 1, sum = 0;

    printf("Enter the limit of natural numbers (positive integer): ");
    scanf("%d", &limit);

    if (limit <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    

    printf("Sum of natural numbers up to %d: ", limit);

    while (num <= limit) {
        sum += num;
        num++;
    }

    printf("%d\n", sum);

    return 0;
}

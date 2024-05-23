//Find circumference of square formula : C = 4 * a#include <stdio.h>

int main() {
    float side, circumference;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate circumference
    circumference = 4 * side;

    // Print result
    printf("Circumference of the square: %.2f\n", circumference);

    return 0;
}
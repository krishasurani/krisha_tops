//Find Area of Square formula : a = a2

#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate area
    area = side * side;

    // Print result
    printf("Area of the square: %.2f\n", area);

    return 0;
}
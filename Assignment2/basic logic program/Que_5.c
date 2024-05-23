//Find Area of Cube formula : a = 6a2

#include <stdio.h>

int main() {
    float side, surfaceArea;

    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    // Calculate surface area
    surfaceArea = 6 * side * side;

    // Print result
    printf("Surface Area of the cube: %.2f\n", surfaceArea);

    return 0;
}
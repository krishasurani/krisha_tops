//Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main() {
    float width, length, circumference;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate circumference
    circumference = 2 * (width + length);

    // Print result
    printf("Circumference of the rectangle: %.2f\n", circumference);

    return 0;
}
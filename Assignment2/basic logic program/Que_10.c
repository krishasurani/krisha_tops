//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main() {
    float width, length, height, surfaceArea;

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    // Calculate surface area (total area)
    surfaceArea = 2 * (width * length + height * length + height * width);

    // Print result
    printf("Surface Area of the rectangular prism: %.2f\n", surfaceArea);

    return 0;
}
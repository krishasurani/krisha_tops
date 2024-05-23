//Convert kilometers into meters

#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000.0f;

    
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}

//Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Get temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius
    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    // Print result
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}

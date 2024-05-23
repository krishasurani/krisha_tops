//Find character value from ascii#include <stdio.h>

int main() {
    int asciiValue;

    printf("Enter an ASCII code: ");
    scanf("%d", &asciiValue);

    // Ensure ASCII value is within valid range (0 to 127)
    if (asciiValue < 0 || asciiValue > 127) {
        printf("Invalid ASCII code. Please enter a value between 0 and 127.\n");
    } else {
        char character = asciiValue;  // Implicit conversion from int to char
        printf("Character equivalent: %c\n", character);
    }

    return 0;
}
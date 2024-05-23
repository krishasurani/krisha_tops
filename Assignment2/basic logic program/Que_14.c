//Find ascii value of given number

#include <stdio.h>

int main() {
    char number;

    printf("Enter a number: ");
    scanf("%c", &number);

    if (number < '0' || number > '9') {
        printf("Invalid input. Please enter a numerical character (0-9).\n");
    } else {
        // Explicit conversion to integer (ASCII values for digits are consecutive)
        int asciiValue = number - '0';  // Subtracting '0' gives the corresponding numerical value
        printf("ASCII value of the number: %d\n", asciiValue);
    }

    return 0;
}
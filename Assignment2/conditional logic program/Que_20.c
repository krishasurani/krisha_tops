//Write a program in C to read any Month Number in integer and display the number of days for this month.

#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Validate month number (1-12)
    if (monthNumber < 1 || monthNumber > 12) {
        printf("Invalid month number. Please enter a value between 1 and 12.\n");
        return 1; // Indicate error
    }

    // Array to store number of days in months (excluding February)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Handle February separately (considering leap years)
    int daysInFebruary = daysInMonth[1];
    if (monthNumber == 2) {
        int year;
        printf("Enter the year: ");
        scanf("%d", &year);

        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInFebruary = 29; // Leap year
        }
    }

    printf("The month %d has %d days.\n", monthNumber, daysInMonth[monthNumber - 1] ? daysInMonth[monthNumber - 1] : daysInFebruary);

    return 0;
}

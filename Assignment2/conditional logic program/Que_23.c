//Accept month number and display month name

#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Array to store month names
    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};

    // Validate month number (1-12)
    if (monthNumber < 1 || monthNumber > 12) {
        printf("Invalid month number. Please enter a value between 1 and 12.\n");
    } else {
        printf("Month name: %s\n", monthNames[monthNumber - 1]);
    }

    return 0;
}

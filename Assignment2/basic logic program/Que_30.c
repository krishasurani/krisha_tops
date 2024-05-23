//WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int choice, years, days;

    printf("Enter your choice:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number of years: ");
            scanf("%d", &years);

            days = years * 365;

            printf("%d years is equivalent to %d days.\n", years, days);
            printf("**Important Note:** This is an approximate calculation based on 365 days per year. Actual days may vary due to leap years.\n");
            break;

        case 2:
            printf("Enter number of days: ");
            scanf("%d", &days);

            years = days / 365;

            printf("%d days is equivalent to approximately %d years.\n", days, years);
            printf("**Important Note:** This is an approximate calculation based on 365 days per year. Actual years may have varying numbers of days due to leap years.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

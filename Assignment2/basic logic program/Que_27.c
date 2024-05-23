//Convert days into months

#include <stdio.h>

int main() {
    int days, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remaining_days = days % 30;

    printf("%d days is approximately equivalent to %d months and %d days.\n", days, months, remaining_days);

    printf("\n**Important Note:** This is an approximate calculation. Months have varying lengths, and this approach does not account for leap years.\n");

    return 0;
}

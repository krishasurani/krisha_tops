#include <stdio.h>

int main() {
    int years, days, remaining_months;

    printf("Enter number of years: ");
    scanf("%d", &years);

    days = years * 365;

    printf("%d years is approximately equivalent to %d days.\n", years, days);
    printf("\n**Important Note:** This is an approximate calculation based on 365 days per year. Actual days may vary due to leap years.\n");

    

    // Print remaining months (assuming 30 days per month)
    remaining_months = days / 30;

    printf("\nAssuming 30 days per month, there are approximately %d months remaining.\n", remaining_months);
    printf("**Important Note:** Months have varying lengths, and this approach is an estimation.\n");

    return 0;
}

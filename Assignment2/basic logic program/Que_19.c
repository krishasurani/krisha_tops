//Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (in decimal): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // Calculate the amount using the compound interest formula
    amount = principal * pow(1 + rate, time);

    // Calculate the compound interest
    compound_interest = amount - principal;

    printf("Amount after %0.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
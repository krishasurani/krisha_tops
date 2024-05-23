//.Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    printf("Enter the following details:\n");

    while (1) {
        printf("  - Principal amount (positive value): ");
        if (scanf("%lf", &principal) == 1 && principal > 0) {
            break;
        } else {
            printf("Invalid input. Please enter a positive numerical value.\n");
            scanf("%*[^\n]"); 
        }
    }

    
    while (1) {
        printf("  - Interest rate (in decimal, between 0 and 1): ");
        if (scanf("%lf", &rate) == 1 && rate >= 0 && rate <= 1) {
            break;
        } else {
            printf("Invalid input. Please enter a decimal value between 0 and 1.\n");
            scanf("%*[^\n]"); 
        }
    }

    while (1) {
        printf("  - Time period (in years, positive value): ");
        if (scanf("%lf", &time) == 1 && time > 0) {
            break;
        } else {
            printf("Invalid input. Please enter a positive numerical value.\n");
            scanf("%*[^\n]"); 
        }
    }

    amount = principal * pow(1 + rate, time);

    // Calculate the compound interest
    compound_interest = amount - principal;

    printf("\nCompound Interest Calculation:\n");
    printf("  - Principal amount: %.2lf\n", principal);
    printf("  - Interest rate: %.2lf%%\n", rate * 100); // Convert decimal rate to percentage
    printf("  - Time period: %.2lf years\n", time);
    printf("  - Amount after %.2lf years: %.2lf\n", time, amount);
    printf("  - Compound Interest: %.2lf\n", compound_interest);

    return 0;
}

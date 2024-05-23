// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include <stdio.h>

int main() {
    int unitsConsumed;
    float billAmount = 0.0, surcharge = 0.0, totalAmount = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 50) {
        billAmount = unitsConsumed * 0.50;
    } else if (unitsConsumed <= 150) {
        billAmount = (50 * 0.50) + ((unitsConsumed - 50) * 0.75);
    } else if (unitsConsumed <= 250) {
        billAmount = (50 * 0.50) + (100 * 0.75) + ((unitsConsumed - 150) * 1.20);
    } else {
        billAmount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unitsConsumed - 250) * 1.50);
    }

    // Apply surcharge (20%)
    surcharge = billAmount * 0.20;
    totalAmount = billAmount + surcharge;

    // Ensure minimum bill of Rs. 256 (if total amount is less)
    if (totalAmount < 256) {
        totalAmount = 256;
    }

    // Display bill details
    printf("\nElectricity Bill Details:\n");
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Bill Amount (without surcharge): Rs. %.2f\n", billAmount);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Total Amount Payable: Rs. %.2f\n", totalAmount);

    return 0;
}

//Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit
//  consumed by the user shouldbe captured from the keyboard to display the total amount to be paid to thecustomer. The
//  charge are as follow :
//  Unit  Charge/unit
//  upto 350 23. @1.20
//  350 and above but less than 600  @1.50
//  600 and above but less than 800  @1.80
//  800 and above  @2.00
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-


#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    float billAmount = 0.0, surcharge = 0.0, totalAmount = 0.0;
    char customerName[50];

    // Customer details input
    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf(" %[^\n]", customerName); // Read name with spaces

    printf("Enter units consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate bill amount based on consumption
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = (350 * 1.20) + ((unitsConsumed - 350) * 1.50);
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = (350 * 1.20) + (250 * 1.50) + ((unitsConsumed - 600) * 1.80);
    } else {
        billAmount = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((unitsConsumed - 800) * 2.00);
    }

    // Apply surcharge if bill exceeds Rs. 800
    if (billAmount > 800) {
        surcharge = billAmount * 0.18;
        totalAmount = billAmount + surcharge;
    } else {
        totalAmount = billAmount;
    }

    // Ensure minimum bill of Rs. 256
    if (totalAmount < 256) {
        totalAmount = 256;
    }

    // Display bill details
    printf("\nElectricity Bill Details:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Bill Amount: Rs. %.2f\n", billAmount);
    if (surcharge > 0) {
        printf("Surcharge (18%%): Rs. %.2f\n", surcharge);
    }
    printf("Total Amount Payable: Rs. %.2f\n", totalAmount);

    return 0;
}

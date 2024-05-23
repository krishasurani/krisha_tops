// calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);

    float profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) {
        printf("Profit: %.2f\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss: %.2f\n", -profitLoss); // Absolute value for loss
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

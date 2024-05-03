#include <stdio.h>

int main() {
  int choice, quantity, price, total_amount = 0;
  char another_order;

  do {
    // Display menu
    printf("1. Pizza - price 180rs/pcs\n");
    printf("2. Burger - price 100rs/pcs\n");
    printf("3. Dosa - price 120rs/pcs\n");
    printf("4. Idli - price 50rs/pcs\n");

    // Get user choice
    printf("Please Enter your choose...: ");
    scanf("%d", &choice);

    // Validate user choice
    if (choice < 1 || choice > 4) {
      printf("Invalid choice. Please enter a number between 1 and 4.\n");
      continue;
    }

    // Get quantity
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Determine price based on choice
    switch (choice) {
      case 1:
        price = 180;
        break;
      case 2:
        price = 100;
        break;
      case 3:
        price = 120;
        break;
      case 4:
        price = 50;
        break;
    }

    // Calculate amount for current order
    int amount = price * quantity;

    // Display order details
    printf("You have selected %s.\n", choice == 1 ? "Pizza" : choice == 2 ? "Burger" : choice == 3 ? "Dosa" : "Idli");
    printf("Amount: %d\n", amount);
    printf("you have selected no of quantities:%d");
    printf("%d\n ", quantity);

    // Update total amount
    total_amount += amount;

    // Print total amount
    printf("Total Amount is = %d\n", total_amount);

    // Ask user if they want another order
    printf("Do you want to place more orders? (y/n): ");
    scanf(" %c", &another_order); // Read whitespace character before y/n input
  } while (another_order == 'y' || another_order == 'Y');

  // Print final total amount
  printf("Total bill amount = %d\n", total_amount);

  return 0;
}

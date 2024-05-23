//Calculate person’s Annual salary

#include <stdio.h>

int main() {
    float salary, premium_rate, premium;

    printf("Enter the annual salary: ");
    scanf("%f", &salary);

    // Set the premium rate (replace with appropriate values based on actual insurance plan)
    premium_rate = 0.05;  // Example: 5% of salary

    // Calculate the premium amount
    premium = salary * premium_rate;

    printf("Insurance premium: %.2f\n", premium);

    return 0;
}
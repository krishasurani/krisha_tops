//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.

#include <stdio.h>

int main() {
    float salary, insurance, loan, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    // Calculate deductions
    insurance = salary * 0.1;  // 10% for insurance
    loan = salary * 0.1;      // 10% for loan

    // Calculate remaining salary
    remaining_salary = salary - insurance - loan;

    printf("Deductions:\n");
    printf("  - Insurance: %.2f\n", insurance);
    printf("  - Loan Installment: %.2f\n", loan);
    printf("Remaining Salary: %.2f\n", remaining_salary);

    return 0;
}

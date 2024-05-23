// Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

int main() {
    float basicSalary, grossSalary, hra, da;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.80;
    } else if (basicSalary <= 20000) {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.90;
    } else {
        hra = basicSalary * 0.30;
        da = basicSalary * 0.95;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    printf("Gross salary of the employee: Rs. %.2f\n", grossSalary);

}

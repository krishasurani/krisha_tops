//Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main() {
    char names[5][30];
    float salaries[5], total_salary = 0.0f, average_salary;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter employee %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter employee %d salary: ", i + 1);
        scanf("%f", &salaries[i]);
        total_salary += salaries[i];
    }

    average_salary = total_salary / 5.0f;

    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\tSalary: %.2f\n", names[i], salaries[i]);
    }

    printf("\nTotal Salary: %.2f\n", total_salary);
    printf("Average Salary: %.2f\n", average_salary);

    return 0;
}

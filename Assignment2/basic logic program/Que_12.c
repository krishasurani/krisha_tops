//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include <stdio.h>

int main() {
    int students, applesPerStudent, totalApples;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    // Set the number of apples per student
    applesPerStudent = 5;

    // Calculate total apples required
    totalApples = students * applesPerStudent;

    // Print the result
    printf("Total apples required: %d\n", totalApples);

    return 0;
}

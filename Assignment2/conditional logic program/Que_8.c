//WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

int main() {
    float height;

    printf("Enter the height of the person (in centimeters): ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("The person is Dwarf.\n");
    } else if ((height >= 150.0) && (height <= 165.0)) {
        printf("The person is average heighted.\n");
    } else if ((height > 165.0) && (height <= 195.0)) {
        printf("The person is taller.\n");
    } else {
        printf("Abnormal height.\n");
    }

    return 0;
}

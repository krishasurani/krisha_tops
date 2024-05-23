 //check whether a triangle can be formed with the given values for the angles.

 #include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the three angles of the triangle (in degrees): ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if all angles are positive
    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid triangle: Angles must be positive.\n");
        return 1; // Indicate error
    }

    // Check if the sum of angles is equal to 180
    if (angle1 + angle2 + angle3 != 180) {
        printf("Invalid triangle: The sum of angles must be 180 degrees.\n");
        return 1; // Indicate error
    }

    printf("Valid triangle!\n");

}

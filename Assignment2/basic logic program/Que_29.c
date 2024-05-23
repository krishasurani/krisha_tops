//Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes, seconds, hours;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    minutes %= 60;  

    seconds = minutes * 60;

    printf("%d minutes is equivalent to %d hours, %d minutes, and %d seconds.\n", minutes, hours, minutes, seconds);

    return 0;
}

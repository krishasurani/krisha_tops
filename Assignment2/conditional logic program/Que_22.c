//WAP to input the week number and print week day

#include <stdio.h>
#include <time.h>

int main() {
    int year, month, day, weekday;
    time_t rawtime;
    struct tm * timeinfo;

    printf("Enter the year (YYYY): ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    month--; // Adjust month for time structure (0-based indexing)

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    // Set time structure with user input
    timeinfo = (struct tm *)localtime(&rawtime);
    timeinfo->tm_year = year - 1900; // Year for time structure (since 1900)
    timeinfo->tm_mon = month;
    timeinfo->tm_mday = day;

    // Calculate weekday using mktime (0 = Sunday, 6 = Saturday)
    mktime(timeinfo);
    weekday = timeinfo->tm_wday;

    // Print weekday name based on weekday number
    switch (weekday) {
        case 0:
            printf("The day is Sunday.\n");
            break;
        case 1:
            printf("The day is Monday.\n");
            break;
        case 2:
            printf("The day is Tuesday.\n");
            break;
        case 3:
            printf("The day is Wednesday.\n");
            break;
        case 4:
            printf("The day is Thursday.\n");
            break;
        case 5:
            printf("The day is Friday.\n");
            break;
        case 6:
            printf("The day is Saturday.\n");
            break;
        default:
            printf("Invalid weekday calculation.\n");
    }

    return 0;
}

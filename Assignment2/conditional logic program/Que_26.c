// WAP to show
// i. Monday to Sunday using switch case

#include <stdio.h>
#include <ctype.h> 

int main() {
    int choice, dayNumber, ch;
    char inputChar;

    printf("Enter 1 for Day of Week or 2 for Vowel/Consonant check: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the day number (1-7): ");
            scanf("%d", &dayNumber);

            switch (dayNumber) {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid day number. Please enter a value between 1 and 7.\n");
            }
            break;

        case 2:
            printf("Enter an alphabet: ");
            scanf(" %c", &inputChar); 

            ch = tolower(inputChar);

            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    printf("Vowel\n");
                    break;
                default:
                    printf("Consonant\n");
            }
            break;

        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

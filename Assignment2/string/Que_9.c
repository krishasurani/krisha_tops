//Write a program in C to find the maximum number of characters in a string


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, max_len = 0, curr_len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            max_len = curr_len > max_len ? curr_len : max_len;
            curr_len = 0;
        } else {
            curr_len++;
        }
    }

    max_len = curr_len > max_len ? curr_len : max_len;

    printf("The maximum number of characters in a word is: %d\n", max_len);

    return 0;
}
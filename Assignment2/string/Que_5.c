//Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int compare_strings(char *str1, char *str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] != '\0') {
        return -1; // str1 is shorter
    } else if (str1[i] != '\0' && str2[i] == '\0') {
        return 1;  // str2 is shorter
    } else {
        return 0; // Strings are equal
    }
}

int main() {
    char str1[100], str2[100];
    int comparison_result;

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    comparison_result = compare_strings(str1, str2);

    if (comparison_result == 0) {
        printf("The strings are equal.\n");
    } else if (comparison_result < 0) {
        printf("The first string is smaller than the second string.\n");
    } else {
        printf("The first string is larger than the second string.\n");
    }

    return 0;
}

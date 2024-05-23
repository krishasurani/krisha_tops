//Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, vowelCount = 0, consonantCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); 
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowelCount++;
        } else if (isalpha(str[i])) { 
            consonantCount++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowelCount);
    printf("The number of consonants in the string is: %d\n", consonantCount);

    return 0;
}

//Convert school’s name in abbreviated form

#include <stdio.h>
#include <ctype.h>  

int main() {
    char schoolName[50];
    int i, isSpace = 1;  

    printf("Enter the school name: ");
    fgets(schoolName, 50, stdin);  

    printf("Abbreviated name: ");
    for (i = 0; schoolName[i] != '\0'; i++) 
    {
        char ch = schoolName[i];

        ch = toupper(ch);

        if (isSpace &&isalpha(ch))
        {
            printf("%c", ch);
            isSpace = 0;  
        } else if (ch == ' ')
        {
            isSpace = 1;  
        }
    }
    printf("\n");

    return 0;
}
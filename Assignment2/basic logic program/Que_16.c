//Convert country’s name in abbreviate form

#include <stdio.h>
#include <string.h>

const char* countries[][2] = {
    {"United States", "US"},
    {"Canada", "CA"},
    {"France", "FR"},
    {"Germany", "DE"},
    {"India", "IND"},
    {"Australia", "AUS"}
    // ... add more countries
};

int main() {
    char country[50];
    int i;

    printf("Enter a country name: ");
    fgets(country, sizeof(country), stdin);
    country[strcspn(country, "\n")] = '\0'; 

    for (i = 0; i < sizeof(countries) / sizeof(countries[0]); i++) {
        if (strcmp(countries[i][0], country) == 0) {
            printf("Abbreviation: %s\n", countries[i][1]);
            return 0;
        }
    }

    printf("Country not found in the list.\n");
    return 1;
}
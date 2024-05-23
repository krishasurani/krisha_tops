// read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0


#include <stdio.h>

int main() {
    int m, n;

    printf("Enter an integer: ");
    scanf("%d", &m);

    if (m != 0) {
        n = (m > 0) ? 1 : -1;  
    } else {
        n = 0;
    }

    printf("The value of n is %d\n", n);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int zeros = 0, ones = 0;
    unsigned int mask = 1;

    // Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);


    while (mask) {
        if (number & mask) {
            ones++;
        } else {
            zeros++;
        }
        mask <<= 1;
    }


    printf("Number of 0s: %d\n", zeros);
    printf("Number of 1s: %d\n", ones);

    return 0;
}

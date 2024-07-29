#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num, n;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter the bit position to check: ");
    scanf("%u", &n);

    if (num & (1 << n)) {
        printf("The %uth bit of %u is set (1).\n", n, num);
    } else {
        printf("The %uth bit of %u is not set (0).\n", n, num);
    }

    return 0;
}


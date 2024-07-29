#include <stdio.h>
#include <stdlib.h>

int findMax(int a, int b, int c, int d);
int findMin(int a, int b, int c, int d);

int main() {
    int num1, num2, num3, num4, max, min;

    // Ask the user to enter four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find maximum and minimum using functions
    max = findMax(num1, num2, num3, num4);
    min = findMin(num1, num2, num3, num4);

    // Print the maximum and minimum
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

// Function to find the maximum of four numbers
int findMax(int a, int b, int c, int d) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max;
}

// Function to find the minimum of four numbers
int findMin(int a, int b, int c, int d) {
    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }

    return min;
}

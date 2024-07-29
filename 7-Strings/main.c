#include <stdio.h>
#include <stdlib.h>

void copyString(char *source, char *destination) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];


    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);


    if (source[strlen(source) - 1] == '\n') {
        source[strlen(source) - 1] = '\0';
    }


    copyString(source, destination);


    printf("Copied string: %s\n", destination);

    return 0;
}

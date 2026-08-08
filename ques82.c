//WAP to reverse a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1; // Subtract 1 to exclude the newline character

    printf("Reversed string: ");
    for (i = length; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
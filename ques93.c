//WAP to check string rotation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // Check if lengths are equal
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Create a new string by concatenating str1 with itself
    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(concatenated, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
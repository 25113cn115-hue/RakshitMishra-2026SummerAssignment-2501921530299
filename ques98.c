//WAP to find common characters in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], common[100];
    int i, j, k = 0, freq1[256] = {0}, freq2[256] = {0};

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    // Find common characters
    for (i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            common[k++] = (char)i;
        }
    }
    common[k] = '\0'; // Null-terminate the common string

    printf("Common characters: %s\n", common);

    return 0;
}
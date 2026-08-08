//WAP to find maximum occuring character in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of characters
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the maximum occurring character
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("The maximum occurring character is: '%c' with frequency %d\n", maxChar, maxFreq);
    return 0;
}
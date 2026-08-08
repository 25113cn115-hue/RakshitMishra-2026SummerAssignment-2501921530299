//WAP to find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longestWord[100] = "";
    int i, j = 0, maxLen = 0, currentLen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the longest word
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strncpy(longestWord, &str[i - currentLen], currentLen);
                longestWord[currentLen] = '\0';
            }
            currentLen = 0;
        }
    }
    // Check the last word
    if (currentLen > maxLen) {
        maxLen = currentLen;
        strncpy(longestWord, &str[i - currentLen], currentLen);
        longestWord[currentLen] = '\0';
    }

    printf("The longest word is: %s\n", longestWord);
    return 0;
}
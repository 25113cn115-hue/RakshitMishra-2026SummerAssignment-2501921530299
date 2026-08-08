//WAP to remove duplicate characters
#include <stdio.h>
#include <string.h>
int main() 

{ 
    char str[100], result[100];
    int i, j = 0, freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove duplicate characters
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            result[j++] = str[i];
            freq[(unsigned char)str[i]]++;
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing duplicate characters: %s\n", result);

    return 0;
}
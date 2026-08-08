//WAP to count the number of words in a sentence
#include<stdio.h>
#include<string.h>

int main() {
    char sentence[100];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count words by checking for spaces
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }

    // Increment wordCount for the last word
    wordCount++;

    printf("The number of words in the sentence is: %d\n", wordCount);

    return 0;
}
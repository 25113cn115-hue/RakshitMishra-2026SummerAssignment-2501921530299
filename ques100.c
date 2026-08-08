//WAP to sort words by length
#include <stdio.h>
#include <string.h>

int main() {
    char words[10][50];
    int i, j, n;

    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        // Remove the newline character from the end
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    // Sort the words by length
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                char temp[50];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words in order of increasing length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
//Write a program to Add matrices
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the result
    printf("Resultant matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
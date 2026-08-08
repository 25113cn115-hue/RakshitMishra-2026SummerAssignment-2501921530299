//Write a program to Transpose matrix.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int i, j, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transposing the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            b[j][i] = a[i][j];
        }
    }

    // Displaying the transposed matrix
    printf("Transposed matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
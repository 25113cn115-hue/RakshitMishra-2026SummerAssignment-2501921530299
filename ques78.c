//Write a program to Check symmetric matrix.
#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, r, c;
    int isSymmetric = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Matrix is not square, hence not symmetric.\n");
        return 1;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking if the matrix is symmetric
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
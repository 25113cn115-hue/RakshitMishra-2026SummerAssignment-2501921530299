//Write a program to Find diagonal sum.
#include <stdio.h>

int main() {
    int a[10][10];
    int i, j, r, c;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the sum of diagonal elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
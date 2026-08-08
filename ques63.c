//Write a program to Find pair with given sum.
#include <stdio.h>
void findPairWithSum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No pair found with the given sum.\n");
}   
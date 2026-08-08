//Write a program to Rotate array right. 
#include <stdio.h>
void rotateRight(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}
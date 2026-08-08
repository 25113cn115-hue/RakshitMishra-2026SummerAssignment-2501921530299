//Write a program to Move zeroes to end. 
#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill the remaining positions with zeroes
    }
}
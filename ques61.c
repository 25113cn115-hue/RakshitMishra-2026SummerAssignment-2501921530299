//Write a program to Find missing number in array
#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // Sum of first n natural numbers
    for (int i = 0; i < n; i++) {
        total -= arr[i]; // Subtract each element from the total
    }
    return total; // The remaining value is the missing number
}
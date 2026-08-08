//Write a program to Find common elements
#include <stdio.h>
void findCommonElements(int arr1[], int arr2[], int n1, int n2, int commonArr[], int *commonSize) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            commonArr[k++] = arr1[i++];
            j++;
        }
    }
    *commonSize = k;
}
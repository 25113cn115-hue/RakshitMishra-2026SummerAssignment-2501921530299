//Write a program to Intersection of arrays. 
#include <stdio.h>
void intersectionOfArrays(int arr1[], int arr2[], int n1, int n2, int intersectionArr[], int *intersectionSize) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            intersectionArr[k++] = arr1[i++];
            j++;
        }
    }
    *intersectionSize = k;
}
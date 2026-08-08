//Write a program to Union of arrays. 
#include <stdio.h>
void unionOfArrays(int arr1[], int arr2[], int n1, int n2, int unionArr[], int *unionSize) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArr[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            unionArr[k++] = arr2[j++];
        } else {
            unionArr[k++] = arr1[i++];
            j++;
        }
    }
    while (i < n1) {
        unionArr[k++] = arr1[i++];
    }
    while (j < n2) {
        unionArr[k++] = arr2[j++];
    }
    *unionSize = k;
}
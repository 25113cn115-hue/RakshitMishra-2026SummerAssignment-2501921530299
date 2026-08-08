//Write a program to Frequency of an element
#include <stdio.h>
int main() {
    int arr[10], n, search, frequency = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            frequency++;
        }
    }
    printf("Frequency of %d is %d\n", search, frequency);
    return 0;
}
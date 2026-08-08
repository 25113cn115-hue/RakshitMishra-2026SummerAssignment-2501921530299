//Write a program to Second largest element.
#include <stdio.h>
int main() {
    int arr[10], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = -1; // Initialize to -1 to handle cases where there is no second largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", secondLargest);
    }
    return 0;
}
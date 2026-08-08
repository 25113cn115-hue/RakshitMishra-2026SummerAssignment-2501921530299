//Write a program to Find sum and average of array.
#include <stdio.h>

int main() {
    int arr[10], n;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Sum of array elements is: %d\n", sum);
    printf("Average of array elements is: %.2f\n", average);
    return 0;
}

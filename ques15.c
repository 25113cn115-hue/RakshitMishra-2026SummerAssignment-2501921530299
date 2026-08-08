//Write a program to Check Armstrong number
#include<stdio.h>
int main()
{
    int n, originalNum, remainder, result = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNum = n;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = n;

    // Calculate the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
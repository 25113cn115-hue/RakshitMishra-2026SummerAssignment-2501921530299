//WAP to convert binary to decimal
#include<stdio.h>
int main()
{
    int n, decimalNum = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;
        decimalNum += remainder * base;
        n /= 10;
        base *= 2;
    }

    printf("Decimal representation: %d\n", decimalNum);
    return 0;
}
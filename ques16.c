//wAP to print armstrong numbers in a range .
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, num, digit, sum;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers in the range %d to %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        num = i;
        sum = 0;
        while (num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
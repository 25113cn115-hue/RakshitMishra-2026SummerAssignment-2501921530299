//WAP to write function to find factorial of a number
#include <stdio.h>

int findFactorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, findFactorial(num));
    return 0;
}

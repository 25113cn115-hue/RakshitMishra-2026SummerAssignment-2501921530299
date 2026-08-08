//wap to Recursive factorial. 
#include<stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        printf("Factorial of %d = %d\n", n, factorial(n));
    }
    return 0;
}
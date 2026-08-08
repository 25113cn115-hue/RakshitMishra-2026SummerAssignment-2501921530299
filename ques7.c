//WAP to find product of the digits of a number
#include<stdio.h>
int main()
{
    int n , product=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n!=0)
    {   product=product*n%10;
        n=n/10;}
        
        printf("The product of the digits in your number is %d", product);
        return 0;
}
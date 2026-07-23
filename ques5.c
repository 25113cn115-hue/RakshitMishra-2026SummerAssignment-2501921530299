//WAP to find the sum of the digits of a number
#include<stdio.h>
int main()
{
    int n , sum=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0)
    {   sum=sum+n%10;
        n=n/10;}
        
        printf("The sum of the digits in your number is %d", sum);
        return 0;
}
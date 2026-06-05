#include<stdio.h>
int main()
{   int n,i,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n);
    { 
        sum=sum+i;
        i++;
        }
    printf("\n sum of first n natural numbers=%d", sum);
    return 0; }
    
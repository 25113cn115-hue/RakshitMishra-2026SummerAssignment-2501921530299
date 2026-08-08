//wap to cout set bits in a number
#include<stdio.h>
int main()
{
    int n , count=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0)
    {   if(n&1==1)
        {   count++;
        }
        n=n>>1;
    }
    printf("The number of set bits in the number is %d", count);
    return 0;
}
//WAP to check strong number 
#include<stdio.h>
int main()
{
    int n , sum=0, originalNum, remainder;
    printf("Enter the number\n");
    scanf("%d", &n);
    originalNum = n;

    while(originalNum!=0)
    {   remainder = originalNum % 10;
        int fact = 1;
        for(int i=1; i<=remainder; i++)
        {   fact *= i;
        }
        sum += fact;
        originalNum /= 10;
    }

    if(sum==n)
    {   printf("%d is a strong number", n);
    }
    else
    {   printf("%d is not a strong number", n);
    }
    return 0;
}
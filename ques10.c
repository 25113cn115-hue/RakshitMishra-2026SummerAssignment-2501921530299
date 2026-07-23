//WAP to print prime numbers in a range
#include<stdio.h>
int main()
{
    int n , i, flag=0, j;
    printf("Enter the range\n");
    scanf("%d", &n);
    printf("The prime numbers in the range are: ");
    for(j=2;j<=n;++j)
    {
        flag=0;
        for(i=2;i<=j/2;++i)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d ", j);
    }
    return 0;
}
//Write a program to Count digits in a number. 
#include<stdio.h>
int main()
{
    int n , counter=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0)
    {   n=n/10;
        counter++;}
        
        printf("There are %d digits in your number", counter);
        return 0;
}
//WAP to create contact management system
#include <stdio.h>  
int main() {  
    char name[50];  
    char phoneNumber[15];  
    char email[50];  

    printf("Enter Name: ");  
    scanf("%s", name);  

    printf("Enter Phone Number: ");  
    scanf("%s", phoneNumber);  

    printf("Enter Email: ");  
    scanf("%s", email);  

    printf("\nContact Details:\n");  
    printf("Name: %s\n", name);  
    printf("Phone Number: %s\n", phoneNumber);  
    printf("Email: %s\n", email);  

    return 0;  
}
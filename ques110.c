//WAP to create bank account management system
#include <stdio.h>

int main() {
    int accountId;
    char accountHolderName[50];
    float balance;

    printf("Enter Account ID: ");
    scanf("%d", &accountId);

    printf("Enter Account Holder Name: ");
    scanf("%s", accountHolderName);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("\nBank Account Details:\n");
    printf("Account ID: %d\n", accountId);
    printf("Account Holder Name: %s\n", accountHolderName);
    printf("Balance: %.2f\n", balance);

    return 0;
}
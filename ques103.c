//WAP to create ATM simulation
#include <stdio.h>
int main()
{
    int pin, enteredPin, choice;
    float balance = 1000.0; // Initial balance

    printf("Welcome to the ATM Simulation!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    // Assuming the correct PIN is 1234
    if (enteredPin != 1234) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2: {
                float depositAmount;
                printf("Enter amount to deposit: ");
                scanf("%f", &depositAmount);
                if (depositAmount > 0) {
                    balance += depositAmount;
                    printf("Deposited $%.2f successfully.\n", depositAmount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            }
            case 3: {
                float withdrawAmount;
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdrawAmount);
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    printf("Withdrew $%.2f successfully.\n", withdrawAmount);
                } else {
                    printf("Invalid withdrawal amount or insufficient funds.\n");
                }
                break;
            }
            case 4:
                printf("Thank you for using the ATM Simulation. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
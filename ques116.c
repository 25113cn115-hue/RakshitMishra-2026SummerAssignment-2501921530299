//WAP to create inventory management system
#include <stdio.h>
int main() {
    int itemId;
    char itemName[50];
    int quantity;
    float price;

    printf("Enter Item ID: ");
    scanf("%d", &itemId);

    printf("Enter Item Name: ");
    scanf("%s", itemName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\nInventory Record:\n");
    printf("Item ID: %d\n", itemId);
    printf("Item Name: %s\n", itemName);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}
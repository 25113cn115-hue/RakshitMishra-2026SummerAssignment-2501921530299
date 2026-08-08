//WAP to create menu-driven array operation system
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        printf("\nMenu Driven Array Operation System:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < MAX_SIZE) {
                    printf("Enter element to insert: ");
                    scanf("%d", &arr[size]);
                    size++;
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;
            case 2:
                if (size > 0) {
                    printf("Element deleted: %d\n", arr[size - 1]);
                    size--;
                } else {
                    printf("Array is empty. No elements to delete.\n");
                }
                break;
            case 3:
                if (size > 0) {
                    printf("Array elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty.\n");
                }
                break;
            case 4:
                printf("Exiting the array operation system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
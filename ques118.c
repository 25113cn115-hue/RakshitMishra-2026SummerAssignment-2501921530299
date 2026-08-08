//WAP to create a mini library system

#include <stdio.h>
#define MAX_BOOKS 100
int main() {
    char books[MAX_BOOKS][50];
    int count = 0;
    int choice;

    do {
        printf("\nMini Library System:\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    printf("Enter Book Title: ");
                    scanf("%s", books[count]);
                    count++;
                } else {
                    printf("Maximum number of books reached.\n");
                }
                break;
            case 2:
                printf("\nBook List:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, books[i]);
                }
                break;
            case 3:
                printf("Exiting the mini library system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
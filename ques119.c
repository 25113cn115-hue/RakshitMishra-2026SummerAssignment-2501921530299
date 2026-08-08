//WAP to create mini employee management system
#include <stdio.h>
#define MAX_EMPLOYEES 100
int main() {
    char employees[MAX_EMPLOYEES][50];
    int count = 0;
    int choice;

    do {
        printf("\nMini Employee Management System:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter Employee Name: ");
                    scanf("%s", employees[count]);
                    count++;
                } else {
                    printf("Maximum number of employees reached.\n");
                }
                break;
            case 2:
                printf("\nEmployee List:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, employees[i]);
                }
                break;
            case 3:
                printf("Exiting the mini employee management system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
//WAP to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nStudent Record System:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    printf("Enter Student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter Student Name: ");
                    scanf("%s", students[count].name);
                    printf("Enter Student Marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                printf("\nStudent Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
                }
                break;
            case 3:
                printf("Exiting the student record system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
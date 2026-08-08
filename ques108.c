//WAP to create marksheet generation system
#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float subject1, subject2, subject3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter Marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter Marks for Subject 3: ");
    scanf("%f", &subject3);

    total = subject1 + subject2 + subject3;
    percentage = (total / 300) * 100;

    printf("\nMark Sheet:\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Subject 1: %.2f\n", subject1);
    printf("Subject 2: %.2f\n", subject2);
    printf("Subject 3: %.2f\n", subject3);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
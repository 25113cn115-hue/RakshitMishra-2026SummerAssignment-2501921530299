//WAP to create student record mangement system 
#include<stdio.h>
int main() {
    int rollNo;
    char name[50];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\nStudent Record:\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    return 0;
}
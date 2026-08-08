//WAP to create a employee management system 
#include<stdio.h>
int main() {
    int empId;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Record:\n");
    printf("Employee ID: %d\n", empId);
    printf("Name: %s\n", name);
    printf("Salary: %.2f\n", salary);

    return 0;
}

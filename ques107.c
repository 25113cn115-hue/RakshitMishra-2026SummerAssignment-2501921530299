//WAP to create salary management system
#include<stdio.h>
int main() {
    int empId;
    char name[50];
    float basicSalary, hra, da, grossSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA (20% of basic salary)
    hra = 0.2 * basicSalary;

    // Calculate DA (10% of basic salary)
    da = 0.1 * basicSalary;

    // Calculate Gross Salary
    grossSalary = basicSalary + hra + da;

    printf("\nSalary Details:\n");
    printf("Employee ID: %d\n", empId);
    printf("Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
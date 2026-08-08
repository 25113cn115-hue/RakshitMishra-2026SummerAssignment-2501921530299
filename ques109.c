//WAP to create library management system
#include <stdio.h>
int main() {
    int bookId;
    char title[100];
    char author[50];
    int availableCopies;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]%*c", title); // To read string with spaces

    printf("Enter Author Name: ");
    scanf(" %[^\n]%*c", author); // To read string with spaces

    printf("Enter Number of Available Copies: ");
    scanf("%d", &availableCopies);

    printf("\nLibrary Record:\n");
    printf("Book ID: %d\n", bookId);
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Available Copies: %d\n", availableCopies);

    return 0;
}
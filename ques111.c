//WAP to create ticket booking system
#include <stdio.h>
int main() {
    int ticketId;
    char passengerName[50];
    char destination[50];
    float ticketPrice;

    printf("Enter Ticket ID: ");
    scanf("%d", &ticketId);

    printf("Enter Passenger Name: ");
    scanf("%s", passengerName);

    printf("Enter Destination: ");
    scanf("%s", destination);

    printf("Enter Ticket Price: ");
    scanf("%f", &ticketPrice);

    printf("\nTicket Booking Details:\n");
    printf("Ticket ID: %d\n", ticketId);
    printf("Passenger Name: %s\n", passengerName);
    printf("Destination: %s\n", destination);
    printf("Ticket Price: %.2f\n", ticketPrice);

    return 0;
}
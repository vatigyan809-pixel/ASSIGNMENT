#include <stdio.h>

int main()
{
    char name[50];
    int age, tickets;
    float fare, total;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Fare per Ticket: ");
    scanf("%f", &fare);

    total = tickets * fare;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger : %s\n", name);
    printf("Age       : %d\n", age);
    printf("Tickets   : %d\n", tickets);
    printf("Total Fare: %.2f\n", total);

    return 0;
}
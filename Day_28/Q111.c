#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do {
        printf("\n===== Ticket Booking System =====");
        printf("\n1. View Available Seats");
        printf("\n2. Book Tickets");
        printf("\n3. Cancel Tickets");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nTotal Seats      : %d", totalSeats);
                printf("\nBooked Seats     : %d", bookedSeats);
                printf("\nAvailable Seats  : %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if (seats <= (totalSeats - bookedSeats) && seats > 0) {
                    bookedSeats += seats;
                    printf("Ticket(s) booked successfully!\n");
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 3:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if (seats <= bookedSeats && seats > 0) {
                    bookedSeats -= seats;
                    printf("Ticket(s) cancelled successfully!\n");
                } else {
                    printf("Invalid cancellation!\n");
                }
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
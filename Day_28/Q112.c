#include <stdio.h>

struct Contact 
{
    char name[50];
    char phone[15];
};

int main() 
{
    struct Contact contact[100];
    int n, i, choice;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    do {
        printf("\n===== Contact Management System =====");
        printf("\n1. Add Contacts");
        printf("\n2. Display Contacts");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                for (i = 0; i < n; i++) {
                    printf("\nEnter details of Contact %d\n", i + 1);

                    printf("Name: ");
                    scanf("%s", contact[i].name);

                    printf("Phone Number: ");
                    scanf("%s", contact[i].phone);
                }

                printf("Contacts added successfully!\n");
                break;

            case 2:
                printf("\n===== Contact List =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nContact %d", i + 1);
                    printf("\nName : %s", contact[i].name);
                    printf("\nPhone: %s\n", contact[i].phone);
                }
                break;

            case 3:
                printf("Exiting Contact Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
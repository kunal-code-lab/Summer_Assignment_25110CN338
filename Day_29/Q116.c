#include <stdio.h>

struct Item 
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() 
{
    struct Item item[100];
    int n, i, choice;

    printf("Enter number of items: ");
    scanf("%d", &n);

    do {
        printf("\n===== Inventory Management System =====");
        printf("\n1. Add Items");
        printf("\n2. Display Items");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                for (i = 0; i < n; i++) 
                {
                    printf("\nEnter details of Item %d\n", i + 1);

                    printf("Item ID: ");
                    scanf("%d", &item[i].id);

                    printf("Item Name: ");
                    scanf("%s", item[i].name);

                    printf("Quantity: ");
                    scanf("%d", &item[i].quantity);

                    printf("Price: ");
                    scanf("%f", &item[i].price);
                }

                printf("Items added successfully!\n");
                break;

            case 2:
                printf("\n===== Inventory Details =====\n");

                for (i = 0; i < n; i++) 
                {
                    printf("\nItem ID: %d", item[i].id);
                    printf("\nItem Name: %s", item[i].name);
                    printf("\nQuantity: %d", item[i].quantity);
                    printf("\nPrice: %.2f\n", item[i].price);
                }
                break;

            case 3:
                printf("Exiting Inventory Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
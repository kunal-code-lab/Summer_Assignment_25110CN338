#include <stdio.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() 
{
    struct Book book[100];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    do {
        printf("\n===== Library Management System =====");
        printf("\n1. Add Book Records");
        printf("\n2. Display Book Records");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                for (i = 0; i < n; i++) {
                    printf("\nEnter details of Book %d\n", i + 1);

                    printf("Book ID: ");
                    scanf("%d", &book[i].id);

                    printf("Book Title: ");
                    scanf("%s", book[i].title);

                    printf("Author Name: ");
                    scanf("%s", book[i].author);

                    printf("Quantity: ");
                    scanf("%d", &book[i].quantity);
                }

                printf("Book records added successfully!\n");
                break;

            case 2:
                printf("\n===== Book Records =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nBook ID: %d", book[i].id);
                    printf("\nTitle: %s", book[i].title);
                    printf("\nAuthor: %s", book[i].author);
                    printf("\nQuantity: %d\n", book[i].quantity);
                }
                break;

            case 3:
                printf("Exiting Library Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
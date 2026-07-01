#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main() {
    struct Book book[100];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Add book details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Title: ");
        scanf("%s", book[i].title);

        printf("Author: ");
        scanf("%s", book[i].author);

        book[i].issued = 0;   // Initially all books are available
    }

    do {
        printf("\n===== Mini Library System =====");
        printf("\n1. Display Books");
        printf("\n2. Issue Book");
        printf("\n3. Return Book");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nBook List:\n");
                for (i = 0; i < n; i++) {
                    printf("\nBook ID: %d", book[i].id);
                    printf("\nTitle: %s", book[i].title);
                    printf("\nAuthor: %s", book[i].author);

                    if (book[i].issued)
                        printf("\nStatus: Issued\n");
                    else
                        printf("\nStatus: Available\n");
                }
                break;

            case 2:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].id == id) {
                        found = 1;

                        if (book[i].issued == 0) {
                            book[i].issued = 1;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book is already issued.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;

            case 3:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].id == id) {
                        found = 1;

                        if (book[i].issued == 1) {
                            book[i].issued = 0;
                            printf("Book returned successfully.\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;

            case 4:
                printf("Exiting Mini Library System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
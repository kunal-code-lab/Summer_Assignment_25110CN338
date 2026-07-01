#include <stdio.h>

int main() 
{
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Record System =====");
        printf("\n1. Add Student Records");
        printf("\n2. Display Student Records");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                for (i = 0; i < n; i++) 
                {
                    printf("\nEnter details of Student %d\n", i + 1);

                    printf("Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Name: ");
                    scanf("%s", name[i]);

                    printf("Marks: ");
                    scanf("%d", &marks[i]);
                }

                printf("Student records added successfully!\n");
                break;

            case 2:
                printf("\n===== Student Records =====\n");

                for (i = 0; i < n; i++) 
                {
                    printf("\nRoll Number: %d", roll[i]);
                    printf("\nName: %s", name[i]);
                    printf("\nMarks: %d\n", marks[i]);
                }
                break;

            case 3:
                printf("Exiting Student Record System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
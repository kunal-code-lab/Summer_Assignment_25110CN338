#include <stdio.h>

int roll[100], marks[100];
char name[100][50];
int n;

void addStudents();
void displayStudents();
void searchStudent();

int main() 
{
    int choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student Records");
        printf("\n2. Display Student Records");
        printf("\n3. Search Student by Roll Number");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting the system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to add student records
void addStudents() 
{
    int i;

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

    printf("Student records added successfully.\n");
}

// Function to display student records
void displayStudents() 
{
    int i;

    printf("\n===== Student Records =====\n");

    for (i = 0; i < n; i++) 
    {
        printf("\nRoll Number: %d", roll[i]);
        printf("\nName: %s", name[i]);
        printf("\nMarks: %d\n", marks[i]);
    }
}

// Function to search a student by roll number
void searchStudent() 
{
    int searchRoll, i;

    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++) {
        if (roll[i] == searchRoll) {
            printf("\nStudent Found:");
            printf("\nRoll Number: %d", roll[i]);
            printf("\nName: %s", name[i]);
            printf("\nMarks: %d\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}
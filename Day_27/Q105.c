#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    struct Student s[100];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Record Management System =====");
        printf("\n1. Add Student Records");
        printf("\n2. Display Student Records");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                for (i = 0; i < n; i++) 
                {
                    printf("\nEnter details of student %d\n", i + 1);

                    printf("Roll Number: ");
                    scanf("%d", &s[i].roll);

                    printf("Name: ");
                    scanf("%s", s[i].name);

                    printf("Marks: ");
                    scanf("%f", &s[i].marks);
                }
                printf("Records added successfully!");
                break;

            case 2:
                printf("\nStudent Records:\n");

                for (i = 0; i < n; i++) 
                {
                    printf("\nRoll No: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
                break;

            case 3:
                printf("Exiting system...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 3);

    return 0;
}
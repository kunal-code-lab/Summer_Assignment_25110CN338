#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    struct Employee emp[100];
    int n, i, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do {
        printf("\n===== Employee Management System =====");
        printf("\n1. Add Employee Records");
        printf("\n2. Display Employee Records");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                for (i = 0; i < n; i++) 
                {
                    printf("\nEnter details of employee %d\n", i + 1);

                    printf("Employee ID: ");
                    scanf("%d", &emp[i].id);

                    printf("Employee Name: ");
                    scanf("%s", emp[i].name);

                    printf("Salary: ");
                    scanf("%f", &emp[i].salary);
                }

                printf("Employee records added successfully!");
                break;

            case 2:
                printf("\nEmployee Records:\n");

                for (i = 0; i < n; i++) 
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
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
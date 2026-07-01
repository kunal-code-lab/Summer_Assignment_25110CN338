#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() 
{
    struct Employee emp[100];
    int n, i, choice, id, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do {
        printf("\n===== Mini Employee Management System =====");
        printf("\n1. Add Employee Records");
        printf("\n2. Display Employee Records");
        printf("\n3. Search Employee by ID");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                for (i = 0; i < n; i++) {
                    printf("\nEnter details of Employee %d\n", i + 1);

                    printf("Employee ID: ");
                    scanf("%d", &emp[i].id);

                    printf("Employee Name: ");
                    scanf("%s", emp[i].name);

                    printf("Department: ");
                    scanf("%s", emp[i].department);

                    printf("Salary: ");
                    scanf("%f", &emp[i].salary);
                }

                printf("Employee records added successfully!\n");
                break;

            case 2:
                printf("\n===== Employee Records =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nDepartment: %s", emp[i].department);
                    printf("\nSalary: %.2f\n", emp[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("\nEmployee Found:\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].department);
                        printf("Salary: %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Exiting Mini Employee Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
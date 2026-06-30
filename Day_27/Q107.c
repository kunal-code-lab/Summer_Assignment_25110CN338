#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

int main() 
{
    struct Employee emp[100];
    int n, i, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do {
        printf("\n===== Salary Management System =====");
        printf("\n1. Add Salary Details");
        printf("\n2. Display Salary Details");
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

                    printf("Basic Salary: ");
                    scanf("%f", &emp[i].basicSalary);

                    printf("Allowance: ");
                    scanf("%f", &emp[i].allowance);

                    printf("Deduction: ");
                    scanf("%f", &emp[i].deduction);

                    emp[i].netSalary = emp[i].basicSalary + 
                                       emp[i].allowance - 
                                       emp[i].deduction;
                }

                printf("Salary details added successfully!");
                break;

            case 2:
                printf("\nEmployee Salary Details:\n");

                for (i = 0; i < n; i++) 
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basicSalary);
                    printf("\nAllowance: %.2f", emp[i].allowance);
                    printf("\nDeduction: %.2f", emp[i].deduction);
                    printf("\nNet Salary: %.2f\n", emp[i].netSalary);
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
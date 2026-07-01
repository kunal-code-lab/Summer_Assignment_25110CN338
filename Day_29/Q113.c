#include <stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;

    do {
        printf("\n===== Menu-Driven Calculator =====");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) 
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {

            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result = %.2f\n", num1 / num2);
                else
                    printf("Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Result = %d\n", (int)num1 % (int)num2);
                break;

            case 6:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
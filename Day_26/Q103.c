#include <stdio.h>

int main() 
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 5000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) 
    {
        printf("Wrong PIN");
        return 0;
    }

    do {
        printf("\n\nATM Menu");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                printf("Your balance is: %.2f", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Money deposited successfully.");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) 
                {
                    balance -= amount;
                    printf("Please collect your cash.");
                }
                else 
                {
                    printf("Insufficient balance.");
                }
                break;

            case 4:
                printf("Thank you for using ATM.");
                break;

            default:
                printf("Invalid choice.");
        }

    } while (choice != 4);

    return 0;
}
#include <stdio.h>

int main() 
{
    int arr[100], n, i, choice, pos, value, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== Menu-Driven Array Operations =====");
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Search Element");
        printf("\n5. Find Sum");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                printf("Array Elements: ");
                for (i = 0; i < n; i++) 
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                if (pos >= 1 && pos <= n + 1) 
                {
                    for (i = n; i >= pos; i--) 
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                } else 
                {
                    printf("Invalid position!\n");
                }
                break;

            case 3:
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);

                if (pos >= 1 && pos <= n) 
                {
                    for (i = pos - 1; i < n - 1; i++) 
                    {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                } else 
                {
                    printf("Invalid position!\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for (i = 0; i < n; i++) 
                {
                    if (arr[i] == value) 
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if (i == n) 
                {
                    printf("Element not found.\n");
                }
                break;

            case 5:
                sum = 0;
                for (i = 0; i < n; i++) 
                {
                    sum += arr[i];
                }
                printf("Sum of array elements = %d\n", sum);
                break;

            case 6:
                printf("Exiting Array Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
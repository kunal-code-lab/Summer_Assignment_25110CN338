#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n===== Menu-Driven String Operations =====");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:
                printf("Length of string = %lu\n", strlen(str));
                break;

            case 2:
                strcpy(str2, str);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf("%s", str2);

                strcat(str, str2);
                printf("Concatenated String: %s\n", str);
                break;

            case 4:
                printf("Enter another string: ");
                scanf("%s", str2);

                if (strcmp(str, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                strcpy(str2, str);
                strrev(str2);      // May not work in some compilers
                printf("Reversed String: %s\n", str2);
                break;

            case 6:
                printf("Exiting String Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
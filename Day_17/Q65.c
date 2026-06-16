#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge first array
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Merge second array
    for(i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
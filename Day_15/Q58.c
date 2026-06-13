#include <stdio.h>

int main()
{
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    // Left rotation
    for(int j = 0; j < k; j++)
    {
        int temp = arr[0];

        for(int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }

    printf("Array after left rotation: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
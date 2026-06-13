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

    // Right rotation
    for(int j = 0; j < k; j++)
    {
        int temp = arr[n - 1];

        for(int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after right rotation: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index = 0;

    // Move non-zero elements to front
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zero
    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeroes to end: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
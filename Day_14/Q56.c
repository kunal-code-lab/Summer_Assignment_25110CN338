#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;   // mark duplicate
            }
        }

        if(count > 1 && arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
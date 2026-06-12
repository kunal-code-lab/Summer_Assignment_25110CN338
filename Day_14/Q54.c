#include <stdio.h>

int main()
{
    int arr[100], n, element, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &element);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }

    printf("Frequency of %d is %d", element, count);

    return 0;
}
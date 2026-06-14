#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxFrequency = 0;
    int maxElement = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFrequency)
        {
            maxFrequency = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element is: %d\n", maxElement);
    printf("Frequency: %d", maxFrequency);

    return 0;
}
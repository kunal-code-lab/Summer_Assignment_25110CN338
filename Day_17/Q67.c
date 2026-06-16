#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], inter[100];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find intersection
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag = 0;

                // Avoid duplicate elements
                for(int m = 0; m < k; m++)
                {
                    if(inter[m] == arr1[i])
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0)
                {
                    inter[k++] = arr1[i];
                }

                break;
            }
        }
    }

    // Print intersection array
    printf("Intersection of arrays: ");

    for(i = 0; i < k; i++)
    {
        printf("%d ", inter[i]);
    }

    return 0;
}
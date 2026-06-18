#include <stdio.h>

int main()
{
    int arr[10][10], n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate diagonal sum
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
    }

    printf("Sum of diagonal elements is: %d", sum);

    return 0;
}
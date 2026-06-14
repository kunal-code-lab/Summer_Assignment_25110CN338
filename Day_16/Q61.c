#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total number of elements (including missing number): ");
    scanf("%d", &n);

    int arr[n-1];

    printf("Enter %d elements of array:\n", n-1);

    for(int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for(int i = 0; i < n-1; i++)
    {
        actualSum = actualSum + arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    printf("Missing number is: %d", missingNumber);

    return 0;
}
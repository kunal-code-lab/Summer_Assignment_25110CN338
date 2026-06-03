#include <stdio.h>

// Recursive function to find sum of digits
int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sumDigits(n / 10);
    }    
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));

    return 0;
}
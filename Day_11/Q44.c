#include<stdio.h>

int factorial(int a)
{
    int fact = 1;
    for(int i = 1 ; i <= a ; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    printf("The factorial of %d is : %d",n,factorial(n));
    return 0;
}
#include<stdio.h>
int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int f;
        f = n*fact( n-1 );
        return f;
    }
}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    printf("Factorial of %d is : %d",n,fact(n));
    return 0;
}

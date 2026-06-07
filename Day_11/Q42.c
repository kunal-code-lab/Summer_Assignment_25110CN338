#include<stdio.h>

int max(int a , int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a,b;
    printf("Enter first number :- ");
    scanf("%d",&a);
    printf("Enter second number :- ");
    scanf("%d",&b);

    printf("Maximum of %d and %d is : %d",a,b,max(a,b));
    return 0;
}
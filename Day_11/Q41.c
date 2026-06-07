#include<stdio.h>

int sum(int a , int b)
{
    int s= a+b;
    return s;
}

int main()
{
    int a,b;
    printf("Enter first number :- ");
    scanf("%d",&a);
    printf("Enter Second number :- ");
    scanf("%d",&b);
    
    printf("Sum of %d and %d is : %d",a,b,sum(a,b));
    return 0;
}
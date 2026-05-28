#include<stdio.h>
int main()
{
    int n,l,product=1;
    printf("Enter a number :-");
    scanf("%d",&n);
    while(n!=0)
    {
        l=n%10;
        product = product*l;
        n=n/10;
    }
    printf("The product of digits of a number is :- %d",product);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,n1,l,fact=1,sum=0;
    printf("Enter a number :-");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        l=n1%10;
        for(int i=1;i<=l;i++)
        {
            fact=fact*i;
        }
        sum = sum + fact;
        fact=1;
        n1=n1/10;
    }
    if(sum==n)
    {
        printf("%d is a Strong Number.",n);
    }
    else
    {
        printf("%d is not a Strong Number.",n);
    }
    return 0;
}
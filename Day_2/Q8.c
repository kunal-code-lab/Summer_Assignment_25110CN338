#include<stdio.h>
int main()
{
    int n,n1,rev=0,l;
    printf("Enter a number :-");
    scanf("%d",&n);
    n1=n;
    while(n1 != 0)
    {
        l=n1 %10;
        rev = rev*10 + l;
        n1=n1/10;
    }
    if(rev==n)
    {
        printf("The given number is palindrome.");
    }
    else
    {
        printf("The given number is not palindrome.");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,rev=0,l;
    printf("Enter a number :-");
    scanf("%d",&n);
    while(n!=0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10; 
    }
    printf("The reverse of the given number is :- %d",rev);
    return 0;
}
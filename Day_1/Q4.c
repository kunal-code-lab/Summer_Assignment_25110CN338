#include<stdio.h>
int main()
{
    int n,d=0;
    printf("Enter a number :-");
    scanf("%d",&n);
    while(n!=0)
    {
        d=d+1;
        n=n/10;
    }
    printf("Total number of digit in a given number is :- %d",d);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number :-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("The given number is prime.");
    }
    else
    {
        printf("The given number is not prime.");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,a=0,b=1,temp;
    printf("Enter the nth number :-");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    printf("The nth(%d) term of Fibonacci Series is :- %d",n,temp);
    return 0;
}
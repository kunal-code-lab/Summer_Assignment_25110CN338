#include<stdio.h>
int main()
{
    int n,a=0,b=1,temp;
    printf("Enter the no. of term you want in Fibonacci Series :-");
    scanf("%d",&n);
    printf("The Fibonacci series is :-\n");
    printf("%d\t%d\t",a,b);
    for(int i=1;i<=n-2;i++)
    {
        temp=a+b;
        printf("%d\t",temp);
        a=b;
        b=temp;
    }
    return 0;
}
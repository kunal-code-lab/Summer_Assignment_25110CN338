#include<stdio.h>
int main()
{
    int n,mul;
    printf("Enter a number of the table :-");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        mul= n*i;
        printf("\n%d * %d = %d",n,i,mul);
    }
    return 0;
}
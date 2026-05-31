#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,d=0,arm=0,l;
    printf("Enter the number :-");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n1!=0)
    {
        d++;
        n1=n1/10;
    }
    while(n2!=0)
    {
        l= n2 % 10;
        arm=arm+(int)pow(l,d);
        n2=n2/10;
    }
    if(arm==n)
    {
        printf("%d is Armstrong number.",n);
    }
    else
    {
        printf("%d is not Armstrong number.",n);
    }
    return 0;
}
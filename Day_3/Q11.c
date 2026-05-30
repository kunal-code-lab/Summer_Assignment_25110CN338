#include<stdio.h>
int findGDC(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int n1,n2,result;
    printf("Enter two integer :-");
    scanf("%d %d",&n1,&n2);
    result = findGDC(n1, n2);
    printf("The GDC of %d and %d is : %d",n1,n2,result);
    return 0;
}
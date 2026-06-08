#include<stdio.h>
#include<math.h>

int armstrong(int a)
{
    int len=0,rem,a1,a2,arm=0;
    a1=a2=a;
    while(a1 != 0)
    {
        len++;
        a1 = a1/10;
    }
    while(a2 != 0)
    {
        rem = a2%10;
        arm = arm + pow(rem,len);
        a2 = a2/10;
    }
    if(arm == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    if(armstrong(n))
    {
        printf("%d is a Armstrong number.",n);
    }
    
    else
    {
        printf("%d is not a Armstrong number.",n);
    }
    return 0;
}
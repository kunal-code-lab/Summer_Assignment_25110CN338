#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two integer :-");
    scanf("%d %d",&n1,&n2);
    for(int i=1;;i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            printf("The LCM of %d and %d is : %d",n1,n2,i);
            break;
        }
    }
    return 0;
}
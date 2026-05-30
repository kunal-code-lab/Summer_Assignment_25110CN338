#include<stdio.h>
int checkprime(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
        if(count==2)
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
    int ni,nf;
    printf("Enter the lower range :-");
    scanf("%d",&ni);
    printf("Enter the upper range :-");
    scanf("%d",&nf);
    for(int i=ni;i<=nf;i++)
    {
        if(checkprime(i))
        {
            printf("%d\t",i);
        }        
    }
    return 0;
}
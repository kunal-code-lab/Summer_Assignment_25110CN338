#include<stdio.h>
#include<math.h>
int main()
{
    int ni,nf,n1,n2,l;
    printf("Enter the range :-");
    scanf("%d %d",&ni,&nf);
    printf("Armstrong Numbers in a range %d to %d are :\n",ni,nf);
    for(int i=ni;i<=nf;i++)
    {
        int d=0,arm=0;
        n1=i;
        n2=i;
        while(n1!=0)
        {
            d++;
            n1=n1/10;
        }
        while(n2!=0)
        {
            l= n2 % 10;
            arm=arm+(pow(l,d));
            n2=n2/10;
        }
        if(arm==i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
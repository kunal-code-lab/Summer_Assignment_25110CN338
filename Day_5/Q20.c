#include<stdio.h>
int main()
{
    int n,count=0,lar=0;
    printf("Enter a number :-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            count = 0;
            for(int j=1;j<=i;j++)
            {
                if(i%j == 0)
                {
                    count++;
                }
            }
        
            if(count==2)
            {
                lar = i;
            }
        }
    }
    printf("The largest prime factor of %d is : %d",n,lar);
    return 0;
}
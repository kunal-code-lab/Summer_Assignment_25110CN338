#include<stdio.h>

int prime(int a)
{
    int count=0;
    for(int i = 1 ; i <= a ; i++)
    {
        if(a%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
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

    if(prime(n))
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}
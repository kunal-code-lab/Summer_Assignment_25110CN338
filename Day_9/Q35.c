#include<stdio.h>
int main()
{
    int n;
    char a;
    printf("Enter the number of rows :- ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            //printf("%c ",(65+j));
            a = 65+j;

        }
        for(int k = 1 ; k <= i ; k++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}
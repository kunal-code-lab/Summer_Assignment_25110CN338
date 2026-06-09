#include<stdio.h>
int main()
{
    int arr[50],n;
    printf("Enter number of Terms :- ");
    scanf("%d",&n);

    printf("Input the Array :- ");

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Array is :- ");

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
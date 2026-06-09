#include<stdio.h>
int main()
{
    int arr[100],n,sum=0,avg;
    printf("Enter number of term :- ");
    scanf("%d",&n);

    printf("Input the array :- ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of Array is :- %d\n",sum);

    printf("Average of the array is :- %d",sum/n);

    return 0;
}
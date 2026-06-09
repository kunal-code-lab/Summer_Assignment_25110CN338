#include<stdio.h>
int main()
{
    int arr[100],n,min,max;
    printf("Enter number of term :- ");
    scanf("%d",&n);

    printf("Enter the input of array :- \n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    min = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The Smallest term in the array is : %d\n",min);

    max = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The largest term in the array is : %d",max);
    return 0;
}
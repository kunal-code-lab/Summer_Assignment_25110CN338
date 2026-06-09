#include<stdio.h>
int main()
{
    int arr[100],n,even=0,odd=0;
    printf("Enter number of terms :- ");
    scanf("%d",&n);

    printf("Enter the input of array :-\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of Even terms are : %d\n",even);
    printf("Number of odd terms are : %d",odd);

    return 0;
}
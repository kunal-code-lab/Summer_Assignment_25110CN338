#include<stdio.h>
int main()
{
    int arr[100],n,key,found,i;
    printf("Enter number of term in array :- ");
    scanf("%d",&n);

    printf("Enter the Input of array :\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be search : ");
    scanf("%d",&key);

    //Linear search
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("%d is found at position %d",key,i+1);
    }
    else
    {
        printf("%d not found in the array.",key);
    }
    return 0;
}
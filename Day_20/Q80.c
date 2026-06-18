#include<stdio.h>

int main()
{
    int arr[10][10],row,col,sum;
    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter number of columns : ");
    scanf("%d",&col);

    printf("Enter the element of the matrix :\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("column-wise sum :\n");
    for(int j = 0 ; j < col ; j++)
    {
        sum = 0;
        for(int i = 0 ; i < row ; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of column %d is : %d\n",j+1,sum);
    }
    return 0;

}

// #include <stdio.h>

// int main()
// {
//     int arr[10][10], rows, cols, sum;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter number of columns: ");
//     scanf("%d", &cols);

//     printf("Enter elements of matrix:\n");
//     for(int i = 0; i < rows; i++)
//     {
//         for(int j = 0; j < cols; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Column-wise sum:\n");

//     for(int j = 0; j < cols; j++)
//     {
//         sum = 0;

//         for(int i = 0; i < rows; i++)
//         {
//             sum = sum + arr[i][j];
//         }

//         printf("Sum of column %d = %d\n", j + 1, sum);
//     }

//     return 0;
// }
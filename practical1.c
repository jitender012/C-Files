#include <stdio.h>
#include <conio.h>
int main(int argc)
{
    printf("\n\n");

    // PRINT AN ARRAY----

    // int i;
    // int arr[4] = {10, 20, 30, 40};
    // for (i = 0; i <= 3; i++)
    // {
    //     printf("%d \t %u \n", arr[i], &arr[i]);
    // }
    // printf("\n %d \n",arr[1]);
    //_______________________________________________

    // PRINT A MATRIX----

    // int arr[3][3], i, j;
    // printf("Enter the elements of array:");
    // for (i = 0; i <= 2; i++)
    // {
    //     for (j = 0; j <= 2; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (i = 0; i <= 2; i++)
    // {
    //     for (j = 0; j <= 2; j++)
    //     {
    //         printf(" %d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    //_______________________________________________

    // SPARSE MATRIX(3 tuple)-----

    // int a[5][5], rows, columns, i, j;

    // printf("Enter the order of matrix should be <5:\n");
    // scanf("%d %d", &rows, &columns);
    // printf("Enter the elements of the matrix:\n");

    // for (i = 0; i < rows; i++)
    // {
    //     for (j = 0; j < columns; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    // //print matrix
    // printf("The matrix is:\n");
    // for (i = 0; i < rows; i++)
    // {
    //     for (j = 0; j < columns; j++)
    //     {
    //         printf("%d  ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("The 3 tuple representation of matrix is:\n");
    // for (i = 0; i < rows; i++)
    // {
    //     for (j = 0; j < columns; j++)
    //     {
    //         if (a[i][j]!=0)
    //         {
    //             printf("%d  %d  %d", (i+1),(j+1),a[i][j]);
    //             printf("\n");
    //         }
    //     }
    // }
    //_______________________________________________

    // MATRIX MULTIPLICATION--------

    // int a[2][2], b[2][2], c[2][2], i, j,k;
    // printf("Enter the elements of 1st matrix:");
    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    // printf("Enter the elements of 2nd matrix:");
    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         scanf("%d", &b[i][j]);
    //     }
    // }
    // printf("Elements of first array:\n");
    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         printf(" %d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("Elements of second array:\n");
    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         printf(" %d ", b[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("Multiplication of matrices:\n");

    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         c[i][j]=0;
    //         for ( k = 0; k <= 1; k++)
    //         {
    //             c[i][j]=c[i][j]+a[i][k]*b[k][j];
    //         }
    //     }
    // }

    // for (i = 0; i <= 1; i++)
    // {
    //     for (j = 0; j <= 1; j++)
    //     {
    //         printf(" %d \t",c[i][j]);
    //     }
    //     printf("\n");
    // }
    //_______________________________________________

    // LINEAR SEARCH---------------

    int arr[5], i, search, flag = 0;
    printf("Enter the elements for array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search:\n");
    {
        scanf("%d", &search);
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf(" %d is exist!\n", search);
    }

    else
    {
        printf("Element doesn't exists.\n");
    }
    //_______________________________________________

    // POINTERS

    // int arr[5], i, *ptr;
    // printf("Enter the elements for array:");
    // for (i = 0; i <=4; i++)
    // {
    //     scanf("%d", arr[i]);
    // }
    // printf("Values of array");

    // for (i = 0; i <=4; i++)
    // {
    //     printf("%d \n", *(ptr + i));
    // }
    //_______________________________________________

    // int a[5]={2, 2, 4, 5, 6};

    // printf("= %d \n",a[3]);
    // printf("\n");

    // for (int i = 0; i < 5; i++)
    // {
    // printf("= %d \n",a[i]);
    // }
    // printf("\n");

    // for (int i = 0; i < 5; i++)
    // {
    // printf("= %d \n",a[2]);
    // }
}
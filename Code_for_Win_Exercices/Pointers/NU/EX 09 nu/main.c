#include <stdio.h>
#include <stdlib.h>

/*
*C program to input and print elements of a two dimensional array using pointers and functions.
*/

int matrix (int a, int b)
{

    int arr [a][b];
    int row, col;

    row=a;
    col=b;
    printf("Input your numbers for an array of 3 rows and 2 columns: \n");

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("Arr[%d][%d]=", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main()
{

    int x,y;
    printf("Choose rows for matrix: \n");
    scanf("%d", x);
    printf("Choose columns for matrix: \n");
    scanf("%d", y);

    matrix(x,y);

    int b;
    int (*ptr)(int, int);
    ptr=matrix;
    b=ptr(x,y);


    printf("\n");
    printf("\n");
    printf("Your pointer array is: \n");
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }






    return 0;
}

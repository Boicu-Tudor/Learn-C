#include <stdio.h>
#include <stdlib.h>

/*
*C program to read elements in a matrix and find the sum of elements of each row and columns of matrix.
*/


int main()
{
    int arr1[3][3]={
                    {1,2,4},
                    {2,3,4},
                    {10,4,10},
    };


    printf("Array A:\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int sum;
    for (int i=0; i<3; i++)
    {
        sum=0;
        for (int j=0; j<3; j++)
        {
            sum=sum+arr1[i][j];
        }
        printf("The sum of row %d is: %d",i, sum);
        printf("\n");
    }


    return 0;
}

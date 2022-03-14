#include <stdio.h>
#include <stdlib.h>

/*
*C program to read elements in a matrix and find the sum of main diagonal (major diagonal) elements of matrix.
*/



int main()
{
    int arr1[3][3]={
                    {1,2,3},
                    {2,3,4},
                    {5,4,10},
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
    printf("The sum of main diagonal elements is: ");
    int sum;
    for (int i=0; i<3; i++)
    {
        sum = sum + arr1[i][i];
    }
    printf("%d", sum);
    return 0;
}

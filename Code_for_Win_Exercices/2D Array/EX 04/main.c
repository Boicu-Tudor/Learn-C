#include <stdio.h>
#include <stdlib.h>

/*
*C program to read elements in two matrices and multiply them.
*/


int main()
{

int arr1[3][3]={
                    {1,2,3},
                    {2,3,4},
                    {5,4,3},
    };



    int arr2[3][3]={
                    {1,1,3},
                    {4,3,2},
                    {6,7,8},
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
    printf("Array B:\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Multiply of Array A and B:\n");


     for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", arr1[i][j]*arr2[i][j]);
        }
        printf("\n");
    }


    return 0;
}

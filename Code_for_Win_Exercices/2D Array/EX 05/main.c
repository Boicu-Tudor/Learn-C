#include <stdio.h>
#include <stdlib.h>

/*
*C program to enter elements in two matrices and check whether both matrices are equal or not.
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
    printf("Are Array A and B equal(1 is yes / 2 is no)?\n");


     for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (arr1[i][j]==arr2[i][j])
            {
                printf("%d ", 1);
            }else printf("%d ",0);
        }
        printf("\n");
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to read elements in a matrix and find the sum of minor diagonal (opposite diagonal) elements.
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
    printf("The sum of minor diagonal elements is: ");


    int sum=0;
    int j=2;
    int i=0;
/*
    for (int i=0,j=2; i<3; i++,j--)
    {
        sum = sum + arr1[i][j];
    }
*/

    while (i<3)
    {
        sum = sum + arr1[i][j];
        i++;
        j--;
    }
    printf("%d", sum);






    return 0;
}

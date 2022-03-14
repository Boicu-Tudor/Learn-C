#include <stdio.h>
#include <stdlib.h>

/*
*C program to input elements in array and copy all elements of first array into second array.
*/





int main()
{


    int i,j, max, size;
    int arr [100];
    int arr2[100];

    printf("Enter max elemetns of the array:");
    scanf("%d", &max);


    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("The elements of the array A are:\n");
    for (i=0; i<max; i++)
    {
        printf("%d ", arr[i]);
    }

    for (j=0; j<size; j,i++)
    {

        arr[j]=arr[i];

    }

    printf("\n");
    printf("The elements of the array B are:\n");
    for (j=0; j<max; j++)
    {
        printf("%d ", arr[j]);
    }






    return 0;
}

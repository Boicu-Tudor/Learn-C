#include <stdio.h>
#include <stdlib.h>

/*
*C program to delete element from array at specified position.
*/



int main()
{
    int i,j, max, size, element;
    int arr [100];

    printf("Enter max elemetns of the array:");
    scanf("%d", &max);


    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }


    printf("\n");
    printf("The elements of the array are:\n");
    for (i=0; i<max; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Type the element you want to delete\n[remember Arrays start from 0]: ");
    scanf("%d", &element);
    for (i=element; i<max; i++)
    {
        arr[i]=arr[i+1];

    }
    max--;



    printf("\n");
    printf("The elements of the new array are:\n");
    for (i=0; i<max; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

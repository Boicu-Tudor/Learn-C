#include <stdio.h>
#include <stdlib.h>

/*
*C program to declare, initialize, input elements in array and print array.
*/





int main()
{


    int i, max, size;
    int arr [1000];

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

    return 0;
}

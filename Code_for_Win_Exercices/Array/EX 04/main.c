#include <stdio.h>
#include <stdlib.h>

/*
*C program to input elements in an array from user, find maximum and minimum element in array.
*/


int main()
{

    int i,size,max, min;
    int arr [100];



    printf("Enter max elemetns of the array:");
    scanf("%d", &size);


    for (i=0; i<size; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }

        if (arr[i]<min)
        {
            min=arr[i];
        }

    }

    printf("\n");
    printf("The max of the aray is: %d\n", max);
    printf("The min of the aray is: %d\n", min);





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to find largest and second largest element in an array.
*/







int main()
{
    int i,size,max,max2;
    int arr [100];



    printf("Enter max elemetns of the array:");
    scanf("%d", &size);


    for (i=0; i<size; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    max2 = arr[0];

    for (i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
    }
    printf("\n");
    printf("The max of the aray is: %d\n", max);
    printf("The second largest number of the aray is: %d\n", max2);

    return 0;
}

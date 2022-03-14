#include <stdio.h>
#include <stdlib.h>

/*
*C program to insert element in array at specified position.
*/



int main()
{

int i,j, max, size, element, nr;
    int arr [100];

    printf("Enter max elemetns of the array:");
    scanf("%d", &max);


    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }


    printf("You want change? Tell us which one.");
    printf("Type the new number: ");
    scanf("%d", &nr);
    printf("Type the element you want to change: ");
    scanf("%d", &element);

    arr[element]=nr;

    printf("\n");
    printf("The elements of the array are:\n");
    for (i=0; i<max; i++)
    {
        printf("%d ", arr[i]);
    }





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to sort (ascendent) an array using bubble sort method.
*/



int main()
{

    int i, j, max, swap;
    int arr[20];

    printf("Choose the number of elements you want to enter: ");
    scanf("%d", &max);

    printf("Enter %d elements down below: \n", max);

    for (i=0; i<max; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i=0; i<max-1; i++)
    {
        for (j=0; j<max-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }

    printf("Ascending order: \n");
    for (i=0; i<max; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

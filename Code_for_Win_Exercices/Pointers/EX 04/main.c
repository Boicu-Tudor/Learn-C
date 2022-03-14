#include <stdio.h>
#include <stdlib.h>

#define Max_Size 5
/*
*C program to input elements in an array and print array using pointers.
*/





int main()
{
    int arr [Max_Size];

    printf("Please input 5 elements for array: \n");

    int *ptr;
    ptr=arr;

    int i, j;
    i=0;
    j=0;
    while (i<Max_Size)
    {
        printf("Input element %d: ",i);
        scanf("%d", &ptr[i]);
        i++;
    }

    ptr = arr;
    printf("\n");
    printf("Your array is: ");

    while (j<Max_Size)
    {
        printf("%d, ", ptr[j]);
        j++;
    }

    free(ptr);

    return 0;
}

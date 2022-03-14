#include <stdio.h>
#include <stdlib.h>

/*
*C program to input elements in array from user and count even and odd elements in array.
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
    printf("The even elements of the array are:\n");
    for (i=0; i<max; i++)
    {

        if (arr[i]%2==0){
            printf("%d ", arr[i]);
        }

    }

    printf("\n");
    printf("The ood elements of the array are:\n");
    for (i=0; i<max; i++)
    {

        if (arr[i]%2!=0){
            printf("%d ", arr[i]);
        }

    }
    return 0;
}

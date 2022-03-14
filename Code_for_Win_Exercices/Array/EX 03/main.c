#include <stdio.h>
#include <stdlib.h>

/*
*C program to read elements in an array and find the sum of array elements.
*/


int main()
{
    int i, max, size, sum;
    int arr [1000];


    printf("Enter max elemetns of the array:");
    scanf("%d", &max);


    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("The sum of the elements of array is: ");
    sum=0;
    for (i=0; i<max; i++)
    {
       sum = sum + arr[i];
    }
     printf("%d",sum);



    return 0;
}

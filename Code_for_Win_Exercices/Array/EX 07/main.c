#include <stdio.h>
#include <stdlib.h>

/*
*C program to input elements in array and count negative elements in array.
*/



int main()
{


    int i, max, size, sum, count;
    int arr [1000];

    printf("Enter max elemetns of the array:");
    scanf("%d", &max);

    sum =0;
    count=0;
    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("The sum of negative elements of the array is:");

    for (i=0; i<max; i++)
    {

        if (arr[i]<0){
            sum = sum + arr[i];
        }

        if (arr[i]<0)
        {
            count = count+1;
        }
    }

    printf("%d", sum);
    printf("\nThe total numbers that were negative is: %d", count);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>


/*
*C program to sort (descendent) an array using bubble sort method.
*/

int main()
{

    int i, j, max, swap;
    int arr[20];

    printf("Choose num of elements you want to put in array: ");
    scanf("%d", &max);

    for (i=0; i<max; i++)
    {
        printf("Put elemen num %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for (i=0; i<max-1; i++)
    {
        for (j=0; j<max-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }


    printf("\n");
    printf("Your descendent order of num is: \n");
    for (i=0; i<max; i++)
    {
        printf("%d\n", arr[i]);
    }



    return 0;
}

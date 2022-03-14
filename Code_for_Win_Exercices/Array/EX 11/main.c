#include <stdio.h>
#include <stdlib.h>

/*
*C program to count frequency of digits in a given number.
*/





int main()
{

    int i,j, max, size, element, last, count;
    int arr [100];

    printf("Enter max elemetns of the array:");
    scanf("%d", &max);


    for (i=0; i<max; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }
//------------------------------------------------ PART 1

    int arr2[10];
    for (j=0;j<10;j++)
    {
        arr2[j]=0;
    }


    for(i=0; i<max; i++)
    {

        element=arr[i];

        while(element!=0)
        {
            last=element%10;
            element/=10;
            arr2[last]++;
        }

    }

    printf("\n");

    for (j=0; j<10; j++)
    {
        printf("The freq of %d is: %d \n",j, arr2[j]);

    }

//------------------------------------------------ PART 2

    return 0;
}

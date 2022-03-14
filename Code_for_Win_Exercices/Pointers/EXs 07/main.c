#include <stdio.h>
#include <stdlib.h>

/*
*C to store n elements in an array and print the elements using pointer.
*/


int main()
{

    int arr [5];
    int *parr;
    parr=&arr[0];

    printf("Enter 5 array numbers: \n");

    int i=0;
    while (i<5)
   {
        printf("Enter element %d: ", i);
        scanf("%d", (parr+i));
        i++;
   }


    parr=&arr[0];
    printf("Your array is: \n");
       for (int i=0; i<5; i++)
    {
         printf("%d\n", parr[i]);
    }





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to copy one array elements to another array using pointers.
*/




int main()
{

    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10];

    printf("Your first array is: \n");
     for (int a=0; a<10; a++)
    {
        printf("%d\n", arr1[a]);
    }
//-----------------------------------------
    int *ptr;
    ptr=&arr1[0];
    for (int i=0; i<10; i++)
    {
        arr1[i]=ptr[i];
    }
//-----------------------------------------

    int *ptr2;

    for (int i=0; i<10; i++)
    {
        ptr[i]=ptr2[i];
    }

//-----------------------------------------
    printf("\n");
    printf("Your second array is: \n");
    for (int i=0; i< 10; i++)
    {
        printf("%d\n", ptr2[i]);
    }


    return 0;
}

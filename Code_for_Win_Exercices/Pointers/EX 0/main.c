#include <stdio.h>
#include <stdlib.h>
#define SIZE 10     // Maximum array size
int main()
{

    int i =10;
    int *pi=&i;

    printf("Value of i: %d\n",i);
    printf("Address of i: %d\n",&i);
    printf("Value of int address that pointer points: %d\n",pi);


    printf("\n");
    printf("\n");

    printf("Address of int Pointer: %d\n",&pi);
    printf("Value of pi: %d\n",*pi);
    printf("\n");
    printf("\n");

int num = 10;        // Declare an integer variable
int *ptr   = &num;   // Pointer to integer
int **dPtr = &ptr;   // Pointer to integer pointer

printf("Value of dPtr = %d \n", &dPtr);  // Address of dptr
printf("Value of dPtr = %d \n", dPtr);   // Print value of dPtr, i.e address of ptr
printf("Value of ptr = %d \n", *dPtr);   // Print value of ptr, i.e. address of num
printf("Value of num = %d \n", **dPtr);  // Print value of num



/*
    // int pointer to store address of dynamic declared memory
    int *parr;

    // n - To get the limit
    // i - Loop counter
    int n, i;

    printf("Enter limit: ");
    scanf("%d", &n);

    // Allocate memory for n elements at runtime
    parr = malloc(n * sizeof(int));

    // check memory allocation error like overflow
    if (parr == NULL)
    {
        printf("Insufficient Memory!!!\n");
        return 0;
    }

    // Read n elements
    printf("Input %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (parr + i));
    }

    // Print array elements
    printf("Input elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(parr + i));
    }

    // Release memory occupied by dynamically allocated array
    free(parr);
*/

   // --------------------------------------------------------------

/*
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int *ptr;
    int count;

    ptr = &arr[0]; // ptr points to arr[0]

    count = 0;

    printf("Accessing array elements using pointer \n");
    while(count < SIZE)
    {
        printf("arr[%d] = %d \n", count, *(ptr + count));

        count++;
    }

    return 0;
*/

    // --------------------------------------------------------------



    return 0;
}

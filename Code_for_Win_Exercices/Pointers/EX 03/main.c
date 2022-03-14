#include <stdio.h>
#include <stdlib.h>

/*
*C program to swap two numbers using pointers.
*/



int main()
{

    int a, b;
    printf("Please put 2 numbers below: \n");
    scanf("%d %d", &a, &b);

    printf("\n");

    int *ptr1, *ptr2;

    ptr1=&a;
    printf("First value of a: %d\n", *ptr1);
    ptr2=&b;
    printf("First value of b: %d\n", *ptr2);

    printf("\n");

    ptr1=&b;
    ptr2=&a;
    printf("Switched a is: %d\n", *ptr1);
    printf("Switched b is: %d\n", *ptr2);
    int *ptr;






    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*Write a program in C to show the basic declaration of pointer.
*/


int main()
{

    int num=10;
    int x,y;
    int *ptr;
    ptr=&num;

    printf("Value of num is: %d\n", *ptr);
    printf("Value of ptr is: %d\n", num);
    printf("\n");
    printf("Address of num is: %d\n", ptr);
    printf("Address of num is: %d\n", &num);
    printf("Address of ptr is: %d\n", &ptr);
    printf("\n");
    printf("Address of x is: %d\n", &x);
    printf("Address of y is: %d\n", &y);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C to demonstrate how to handle the pointers in the program.
*/



int main()
{

    int num=10;
    int *ptr=&num;

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %d\n", &num);
    printf("The value of ptr is: %d\n", *ptr);
    printf("The address of ptr is: %d\n", &ptr);

    printf("\n");
    printf("Now num=30");
    num=30;
    printf("\n");

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %d\n", &num);
    printf("The value of ptr is: %d\n", *ptr);
    printf("The address of ptr is: %d\n", &ptr);

    printf("\n");
    printf("Now *ptr=22");
    *ptr=22;
    printf("\n");

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %d\n", &num);
    printf("The value of ptr is: %d\n", *ptr);
    printf("The address of ptr is: %d\n", &ptr);

    printf("\n");
    printf("Now num=11");
    num=11;
    printf("\n");

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %d\n", &num);
    printf("The value of ptr is: %d\n", *ptr);
    printf("The address of ptr is: %d\n", &ptr);
    return 0;
}

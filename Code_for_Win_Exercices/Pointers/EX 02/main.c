#include <stdio.h>
#include <stdlib.h>

/*
*C program to read two numbers from user and add them using pointers.
*/




int main()
{

    int a, b;
    printf("Please put 2 numbers below: \n");
    scanf("%d %d", &a, &b);

    int sum = a+b;
    int dif = a-b;

    int *ptr;

    ptr=sum;
    printf("The sum is: %d\n", sum);

    ptr=dif;
    printf("The dif is: %d\n", dif);

    free(ptr);

    return 0;
}

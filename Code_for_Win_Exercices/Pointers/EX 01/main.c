#include <stdio.h>
#include <stdlib.h>

/*
*C program to create, initialize and demonstrate the use of pointers.
*/



int main()
{

    int a=22;
    double b=22.5;
    char c='C';

    printf("The address of int a (%d) is: %d.\n", a, &a);
    printf("The address of double b (%.2f) is: %d.\n", b, &b);
    printf("The address of char c (%d) is: %d.\n", c, &c);

    printf("\n");
    printf("\n");

    int *pa=&a;
    double *pb=&b;
    char *pc=&c;

    printf("The value of *pa is: %d\n",*pa); //or %d, a
    printf("The address of a is: %d\n", pa);
    printf("The address of pa is: %d\n", &pa);

    printf("\n");
    printf("\n");

    printf("The value of *pb is: %.2f\n",*pb); //or %d, b
    printf("The address of b is: %d\n", pb);
    printf("The address of pb is: %d\n", &pb);

    printf("\n");
    printf("\n");

    printf("The value of c is: %c\n", *pc); //or %d, c
    printf("The address of c is: %d\n", pc);
    printf("The address of pc is: %d\n", &pc);

    printf("\n");
    printf("\n");
    return 0;
}

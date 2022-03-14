#include <stdio.h>
#include <stdlib.h>

/*
*C to demonstrate the use of &(address of) and *(value at address) operator.
*/


int main()
{


    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("----------------------------------------------------\n");

    printf("m=300\nfx=300.606\ncht=z\n");

    int m = 300;
    double fx = 300.606;
    int cht = 'z';

    printf("\n");
    printf("Using & operator: \n");
    printf("------------------\n");

    printf("Address of m is: %d\n", &m);
    printf("Address of fx is: %d\n",&fx);
    printf("Address of cht is: %d\n",&cht);

    printf("\n");
    printf("Using & and * operator: \n");
    printf("------------------------\n");

    printf("The value of address m is: %d\n", *&m);
    printf("The value of address fx is: %.3f\n",*&fx);
    printf("The value of address cht is: %c\n",*&cht);

    printf("\n");
    printf("Using only pointer variable: \n");
    printf("-----------------------------\n");

    int *pm=&m;
    double *pfx=&fx;
    int *pcht=&cht;
    printf("Address m is: %d\n", pm);
    printf("Address fx is: %d\n", pfx);
    printf("Address cht is: %d\n", pcht);

    printf("\n");
    printf("Using only pointer operator: \n");
    printf("-----------------------------\n");

    printf("The value of address m is: %d\n", *pm);
    printf("The value of address fx is: %.3f\n",*pfx);
    printf("The value of address cht is: %c\n",*pcht);



    return 0;
}

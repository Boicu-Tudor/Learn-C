#include <stdio.h>
#include <stdlib.h>

/*
*C program to find the sum of all natural numbers between 1 to n using for loop.
*/



int main()
{

    int x, y;
    int i;
    printf("Please enter a number:");
    scanf("%d", &x);

    for (i=1; i<=x; i++)
    {
        y=y+i;
    }
    printf ("The sum between 1 and %d is: %d",x, y);


    return 0;
}

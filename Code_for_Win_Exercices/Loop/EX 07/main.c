#include <stdio.h>
#include <stdlib.h>


/*
*C program to input number from user and find sum of all odd numbers between 1 to n.
*/



int main()
{

    int x, y;
    int i;
    printf("Please enter a number:");
    scanf("%d", &x);

    for (i=1; i<=x; i+=2)
    {
            y=y+i;

    }
    printf ("The sum of odd numbers between 1 and %d is: %d",x, y);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to find sum of all even numbers from 1 to n using for loop.
*/

int main()
{
 int x, y;
    int i;
    printf("Please enter a number:");
    scanf("%d", &x);

    for (i=0; i<=x; i+=2)
    {
            y=y+i;

    }
    printf ("The sum of even numbers between 1 and %d is: %d",x, y);


    return 0;
}

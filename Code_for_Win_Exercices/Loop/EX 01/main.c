#include <stdio.h>
#include <stdlib.h>

/*
*C program to print all natural numbers from 1 to n using loop. C program to print first n natural numbers using loop.
*/


int main()
{

    int x;
    printf("Please enter a number:");
    scanf("%d", &x);

    int i=1;
    while (i<=x)
    {
        printf("%d\n", i);
        i++;

    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and print multiplication table of the given number using for loop.
*/




int main()
{
    int x;
    int i;


    printf("Please enter a number:");
    scanf("%d", &x);

    printf ("The multiplication table for this number is:\n");

    for (i=1; i<=10; i++)
    {
       int m=x;
        m*=i;
        printf("%d*%d= %d\n",x, i, m);

    }



    return 0;
}

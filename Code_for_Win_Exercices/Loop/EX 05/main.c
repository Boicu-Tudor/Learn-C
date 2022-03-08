#include <stdio.h>
#include <stdlib.h>

/*
*C program to print all odd numbers from 1 to n using for loop. How to print odd numbers from 1 to n using loop in C programming.
*/




int main()
{

    int x;
    printf("Please enter a number:");
    scanf("%d", &x);

    int i=1;

    while (i<=x)
    {
        if (i%2!=0){
        printf("%d\n", i);
        }
    i++;
    }


    return 0;
}

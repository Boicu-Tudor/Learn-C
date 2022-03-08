#include <stdio.h>
#include <stdlib.h>

/*
*C program to print alphabets from a to z using for loop. How to print alphabets using loop in C programming.
*/


int main()
{
    char x;
    printf("Please enter a number:");
    scanf (" %c", &x);

    while (x<='z')
    {
        printf("%c\n", x);
        x++;

    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to input any number from user and find cube of the given number using function.
*/

    int cube (int num1)
    {
        num1=num1*num1*num1;
    }



int main()
{

    int x;
    printf("Please choose a number to see the cube of it: ");
    scanf("%d", &x);

    printf("The cube of %d is: %d",x, cube(x));







    return 0;
}

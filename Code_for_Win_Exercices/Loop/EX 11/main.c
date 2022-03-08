#include <stdio.h>
#include <stdlib.h>


/*
*C program to input a number from user and find first and last digit of number using loop.
*/

//To find last digit of a number in programming we use modulo operator %. A number when modulo divided by 10 returns its last digit.

int main()
{
    int x;
    int first, last;

    printf("Please enter a number:");
    scanf("%d", &x);

    first=x;
    last = x%10;


    while (first >=10)
    {
        first/=10;
    }

    printf("The first digit is: %d\n", first);
    printf("The last digit is: %d\n", last);


    return 0;
}

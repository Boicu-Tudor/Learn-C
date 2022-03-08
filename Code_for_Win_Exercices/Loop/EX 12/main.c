#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number and find sum of first and last digit of the number using for loop.
*/

int main()
{
    int x;
    int first, last;

    printf("Please enter a number:");
    scanf("%d", &x);

    last = x%10;
    first=x;

    while (first>=10)
    {
        first/=10;
    }

    printf("The first digit is: %d\n", first);
    printf("The las digit is: %d\n", last);

    printf("The sum of first and last is: %d", first+last);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to check whether a number is divisible by 5 and 11 or not using if else.
*/


    int x;
    printf("Please enter a number:");
    scanf("%d", &x);

    if (x%5==0 && x%11==0)
    {
        printf("The number %d is divisible by 5 and 11", x);
    }else
    {
        printf("The number %d is not divisible by 5 and 11", x);
    }

    return 0;
}

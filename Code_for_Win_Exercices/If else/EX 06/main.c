#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to check leap year using if else. How to check whether a given year is leap year or not in C programming.
*/

    int x;
    printf("Enter a year:");
    scanf("%d", &x);

    if ((x%4==0 && x%100!=0) || x%400==0)
    {
        printf("%d is a leap year", x);
    }else
    {
        printf("%d is not a leap year", x);
    }


    return 0;
}

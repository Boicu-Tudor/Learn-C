#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to enter month number between(1-12) and print number of days in month using if else.
*/

 int month;
 printf("Enter a month number between 1-12:");
 scanf("%d", &month);


    if (month==1)
    {
        printf("This month has 31 days");
    }else if (month==2)
    {
        printf("This month has 28 days");
    }else if (month==3)
    {
        printf("This month has 31 days");
    }else if (month==4)
    {
        printf("This month has 30 days");
    }else if (month==5)
    {
        printf("This month has 31 days");
    }else if (month==6)
    {
        printf("This month has 30 days");
    }else if (month==7)
    {
        printf("This month has 31 days");
    }else if (month==8)
    {
        printf("This month has 31 days");
    }else if (month==9)
    {
        printf("This month has 30 days");
    }else if (month==10)
    {
        printf("This month has 31 days");
    }else if (month==11)
    {
        printf("This month has 30 days");
    }else if (month==12)
    {
        printf("This month has 31 days");
    }else
    {
        printf("Nice try, but I said a number between 1 and 12 not %d", month);
    }





    return 0;
}

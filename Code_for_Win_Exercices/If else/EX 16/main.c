#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
*/

     int a, b, c;

    printf("Enter your first side:");
    scanf("%d", &a);

    printf("Enter your second side:");
    scanf("%d", &b);

    printf("Enter your third side:");
    scanf("%d", &c);


    if (a==b && a==c && b==c)
    {
        printf("This triangle is equilateral");
    }else if (a==b||a==c||b==c)
    {
        printf("This triangle is isosceles");
    }else
    {
        printf("This triangle is scalene");
    }



    return 0;
}

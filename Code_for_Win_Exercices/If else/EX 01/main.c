#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to find maximum between two numbers using if else.
*/

int x, y;

printf("Please enter your first number:");
scanf("%d", &x);
printf("Please enter your second number:");
scanf("%d", &y);

if (x>y)
{
    printf("%d is bigger than %d", x,y);
}else
{
    printf("%d is bigger than %d", y,x);
}


    return 0;
}

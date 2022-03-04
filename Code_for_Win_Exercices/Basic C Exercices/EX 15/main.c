#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*
*C program to input side of an equilateral triangle from user and find area of the given triangle.
*/

double side;
printf("You have an equilateral triangle, enter the side:");
scanf("%lf", &side);

double area;

area =(sqrt (3)/4)*(side*side);

printf("The area of triangle is: %.2f", area);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input base and height of a triangle and find area of the given triangle.
*/

int base, height;

printf("Enter the base of the triangle:");
scanf("%d", &base);
printf("Enter the height of the triangle:");
scanf("%d", &height);

int area;
area=(base*height)/2;

printf("The area of the triangle is: %d", area);



    return 0;
}

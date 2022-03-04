#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C Program to input two angles from user and find third angle of the triangle.
*/


int angle1, angle2;

printf("Enter first angle:");
scanf("%d", &angle1);

printf("Enter second angle:");
scanf("%d", &angle2);


int angle3;
angle3=180-(angle1+angle2);

printf("The 3rd angle is: %d", angle3);




    return 0;
}

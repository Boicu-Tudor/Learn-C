#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*
*C program to input a number and find square root of the given number.
*/


  double num1;
    printf("Enter a number:");
    scanf("%lf", &num1);

 double num2;
 num2= sqrt(num1);

    printf("The square of %.2f is: %.2f",num1,num2);

    return 0;
}

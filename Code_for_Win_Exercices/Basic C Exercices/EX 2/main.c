#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   *C program to input two numbers from user and calculate their sum.
   */

    int x, y, sum;

printf("Enter your first number: ");
scanf("%d", &x);

printf("Enter your second number: ");
scanf("%d", &y);

sum = x+y;

printf("The sum is: %d", sum);

    return 0;
}

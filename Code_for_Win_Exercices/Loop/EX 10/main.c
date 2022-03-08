#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*C program to input a number from user and count number of digits in the given integer using loop.
*/



int main()
{

    int x;
    int count;

    printf("Please enter a number:");
    scanf("%d", &x);

    count = log10(x)+1;
    printf("Total digits: %d", count);

/*
   do
   {
       count++;
       x=x/10;

   }while (x!=0);

    printf ("The total digits are: %d", count);
*/










    return 0;
}

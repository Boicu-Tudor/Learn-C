#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number and calculate sum of digits using for loop.
*/



int main()
{
    int x;
    int last, sum;

    printf("Please enter a number:");
    scanf("%d", &x);



    while (x!=0)
    {

       last = x%10;
       sum = sum + last;
       x/=10;
    }


    printf("The sum of all digits is: %d", sum);


    return 0;
}

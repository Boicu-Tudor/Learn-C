#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and calculate product of its digits.
*/
int main()
{
    int x;
    int last, prod;
    prod=1;

    printf("Please enter a number:");
    scanf("%d", &x);



    while (x!=0)
    {
    last = x%10;
    prod = prod * last;
    x/=10;
    }


    printf("The sum of all digits is: %d", prod);

    return 0;
}

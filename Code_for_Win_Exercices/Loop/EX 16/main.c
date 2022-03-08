#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and find reverse of the given number using for loop.
*/



int main()
{

    int x;
    int last, reverse;

    printf("Please enter a number:");
    scanf("%d", &x);


    printf("The reversed %d is : ",x);

    while (x!=0)
    {
    last = x%10;
    reverse = reverse *0;
    reverse= last+reverse;
    x/=10;
    printf("%d", reverse);
    }

    /* ---Another solution---

    while (x!=0)
    {
    last = x%10;
    reverse = reverse *10;
    reverse= last+reverse;
    x/=10;
    }
    printf("%d", reverse);
    */


    return 0;
}

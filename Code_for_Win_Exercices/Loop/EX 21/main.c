#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*C program to find power of a number using for loop.
*/



int main()
{
    int num1, num2;
    int powe;

    powe=1;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please put a power: ");
    scanf("%d", &num2);

    for (int i=0; i<num2; i++)
    {
        powe=powe*num1;
    }

    printf("The restul is: %d", powe);

    return 0;
}

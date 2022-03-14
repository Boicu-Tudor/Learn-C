#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and find power of given number.
*/

int pow (int num1, int num2)
{
    int power=1;
    for (int i=0; i<num2; i++)
    {
        power=power*num1;
    }
    return power;
}

int main()
{

    int x, y;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Enter a power:");
    scanf("%d", &y);

int pr = pow(x, y);

printf("The result is is: %d",pr);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
C program to input two numbers from user and find their power using pow() function.
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

    int num1, num2;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("Enter the power of number:");
    scanf("%d", &num2);

    int power = pow(num1, num2);

printf("The number %d at %d power is: %d", num1, num2, power);



    return 0;
}

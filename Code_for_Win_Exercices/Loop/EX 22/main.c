#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and find all factors of the given number using for loop.
*/


int main()
{

    int num1, num2;

    printf("Please enter a number: ");
    scanf("%d", &num2);


    num1=1;
    printf("Facors of %d: \n", num2);
    while (num1<=num2)
    {
        if (num2%num1==0)
        {
            printf("%d\n", num1);
        }
        num1++;
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
* C program to input a number and calculate its factorial using for loop.
*/





int main()
{

       int i,num1, num2;

    printf("Please enter a number: ");
    scanf("%d", &num2);

    num1=1;
    for (i=1; i<=num2; i++)
    {
        num1=num1*i;
    }

    printf("The factorial of %d is: %d", num2, num1);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
* C program to input two numbers from user and find LCM (Lowest Common Multiple) using loop.
*/



int main()
{

    int num1, num2;
    int max, lcm;

    printf("Please enter your first number: ");
    scanf("%d", &num1);

    printf("Please enter your second number: ");
    scanf("%d", &num2);

    max = num1 > num2? num1:num2;


    while (1)
    {
        if (max%num1==0 && max%num2==0)
        {
            lcm=max;
            break;
        }
        max++;
    }


    printf("The LWM of %d and %d is: %d", num1, num2, lcm);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number from user and check whether given number is even or odd using functions.
*/

    int odd (int num1)
    {
        int x=num1;
        if (x%2==0)
        {
            printf("This number is even");
        }else if (x%2==1)
        {
            printf("This number is odd");
        }else printf("Invalid data");
    }


int main()
{

    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    odd(x);


    return 0;
}

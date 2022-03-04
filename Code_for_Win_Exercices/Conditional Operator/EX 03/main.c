#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input a number and check whether number is even or odd using Conditional/Ternary operator ?:.
*/

    int num1;
    printf("Enter your number:");
    scanf("%d",&num1);



    num1%2==0? "Even": "Odd";
    printf("The number %d is %s", num1, (num1%2==0? "Even": "Odd"));




    return 0;
}

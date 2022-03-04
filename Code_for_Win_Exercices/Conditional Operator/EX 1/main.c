#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:.
*/

    int num1, num2;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);

    num1>num2? printf("%d is bigger than %d.", num1, num2):printf("%d is bigger than %d.", num2,num1);





    return 0;
}

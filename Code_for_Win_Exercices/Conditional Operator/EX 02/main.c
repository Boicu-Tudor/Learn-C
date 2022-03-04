#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator ?:.
*/

int num1, num2, num3;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);
    printf("Enter your third number:");
    scanf("%d",&num3);


    //num1>num2? printf("%d is bigger than %d.", num1, num2):printf("%d is bigger than %d.", num2,num1);

num1>num2 && num1>num3? printf("%d is bigger.", num1): num2>num1 && num2>num3?printf("%d is bigger.", num2):printf("%d is bigger.", num3);






    return 0;
}

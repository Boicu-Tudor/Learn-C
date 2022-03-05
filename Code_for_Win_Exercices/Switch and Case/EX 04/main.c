#include <stdio.h>
#include <stdlib.h>

/*
*C program to input two numbers from user and find maximum between two numbers using switch case.
*/





int main()
{

    int x, y;

    printf("Please enter your first number: ");
    scanf("%d", &x);

    printf("Please enter your second number: ");
    scanf("%d", &y);

switch (x>y)
{
    case 1:
        printf("%d is bigger than %d", x,y);
        break;
    case 0:
        printf("%d is bigger than %d", y,x);
        break;
    default:
        printf("Invalid data");
}




    return 0;
}

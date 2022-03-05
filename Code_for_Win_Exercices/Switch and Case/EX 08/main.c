#include <stdio.h>
#include <stdlib.h>

/*
*C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions.
*/


int main()
{

    double x, y;
    char op;

    printf("Enter your first number:");
    scanf("%lf", &x);

    printf("What would you like to do?\nChoose one (*, /, +, -): ");
    scanf(" %c", &op);

    printf("Enter your second second:");
    scanf("%lf", &y);

    switch (op)
    {
    case '+':
        printf("The result is: %.2f", x+y);
        break;
    case '-':
        printf("The result is: %.2f", x-y);
        break;
    case '/':
        printf("The result is: %.2f", x/y);
        break;
    case '*':
        printf("The result is: %.2f", x*y);
        break;

    default:
        printf("Invalid data");
    }



    return 0;
}

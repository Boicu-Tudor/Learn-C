#include <stdio.h>
#include <stdlib.h>

/*
*C program to input number from user and check whether the number is even or odd using switch case.
*/





int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    switch (x%2)
    {
    case 1:
        printf("The number %d is an odd number", x);
        break;
    case 0:
        printf("The number %d is an even number", x);
        break;
    default:
        printf("Invalid data");
    }




    return 0;
}

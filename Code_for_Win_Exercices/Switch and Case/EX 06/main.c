#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number and check positive negative or zero using switch case.
*/





int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    switch (x>0)
    {

    case 1:
        printf("The number %d is positive", x);
        break;
    case 0:
        switch (x<0)
        {
            case 1:
            printf("The number %d is negative", x);
            break;

            case 0:
            printf("The number is null");
            break;
        }
        break;
    default:
        printf("Data is invalid");
    }





    return 0;
}

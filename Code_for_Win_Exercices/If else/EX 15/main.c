#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
* C program to input side of a triangle and check whether triangle is valid or not using if else.
*/

    int a, b, c;
    printf("Please enter first side of triangle:");
    scanf("%d", &a);

    printf("Please enter second side of triangle:");
    scanf("%d", &b);

    printf("Please enter third side of triangle:");
    scanf("%d", &c);



    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Your triangle is valid");
    }else
    {
        printf("Your triangle is not valid");
    }


    return 0;
}

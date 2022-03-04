#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input a character from user and check whether given character is alphabet, digit or special character using if else.
*/


    char x;
    printf("Please enter a char:");
    scanf("%c", &x);

    if (x>='a'&& x <='z'||x>='A'&& x <='Z')
    {
        printf("%c is an alphabet char", x);
    }else if (x>=0&& x<=9)
    {
        printf("%c is an numeric char", x);
    }else
    {
        printf("%c is a special char", x);
    }





    return 0;
}

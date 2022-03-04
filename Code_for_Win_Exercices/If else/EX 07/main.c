#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
* C program to input a character from user and check whether the given character is alphabet or not using if else.
*/

    char x;
    printf("Please enter a char:");
    scanf("%c", &x);

    if ((x>='a'&& x<='z') || (x>='A'&& x<='Z'))
    {
        printf ("%c is from alphabet", x);
    }else
    {
        printf ("%c is not from alphabet", x);
    }







    return 0;
}

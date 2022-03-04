#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.
*/

    char x;
    printf("Enter an alphabet char:");
    scanf("%c", &x);

    if (x>='a'&& x <='z')
    {
        printf("%c is a lowecase char",x);
    }else if (x>='A'&& x <='Z')
    {
        printf("%c is an uppercase char",x);
    }else
    {
        printf("Nice try, but %c is not an alphabet char",x);
    }










    return 0;
}

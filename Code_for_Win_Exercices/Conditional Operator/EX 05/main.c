#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:.
*/

    char chars;
    printf("Enter a character:");
    scanf(" %c", &chars);


    chars>='a' && chars <= 'z' || chars>='A' && chars <= 'Z'
    ?printf("This is a char of alphabet")
    :printf("This is not a char of alphabet");


    return 0;
}

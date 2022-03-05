#include <stdio.h>
#include <stdlib.h>


/*
*C program to input an alphabet and check whether it is vowel or consonant using switch case.
*/


int main()
{

    char x;

    printf ("Please enter an alphabet char: ");
    scanf ("%c", &x);

    switch (x)
    {
    case 'a':
        printf("This is a vowel");
        break;
    case 'A':
        printf("This is a vowel");
        break;

    case 'e':
        printf("This is a vowel");
        break;
    case 'E':
        printf("This is a vowel");
        break;

    case 'i':
        printf("This is a vowel");
        break;
    case 'I':
        printf("This is a vowel");
        break;
    case 'o':
        printf("This is a vowel");
        break;
    case 'O':
        printf("This is a vowel");
        break;
    case 'u':
        printf("This is a vowel");
        break;
    case 'U':
        printf("This is a vowel");
        break;
    default:
        printf("This is a consonant");

    }







    return 0;
}

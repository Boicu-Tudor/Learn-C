#include <stdio.h>
#include <stdlib.h>

/*
*C to check whether a character is digit or not.
*/


int main()
{
    char text [1];
    printf("Please write down a letter: ");
    gets(text);
    printf("\n");

    printf("Your letter is: %s", text);
    printf("\n");
    printf("\n");
    printf("This letter is: ");

    int a,i;
    i=0;
    if (text[0]>='a'&& text[i]<='z')
    {
        printf("lower cap");
    }else if (text[0]>='A'&& text[i]<='Z')
        {
            printf("upper cap");
        }
    else if (text[0]>='0' && text[i]<='9')
        {
            printf("This is a digit");
        }
        else
        {
            printf("Special character");
        }
    return 0;
}

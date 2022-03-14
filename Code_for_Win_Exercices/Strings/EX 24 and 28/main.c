#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
 ex 24: *C to check whether a letter is uppercase or not.
 ex 28: *C to check whether a letter is lowercase or not.
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
        else
        {
            printf("Invalid data");
        }

    return 0;
}

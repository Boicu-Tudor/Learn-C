#include <stdio.h>
#include <stdlib.h>

/*
*C to replace the spaces of a string with a specific character.
*/


int main()
{
    char text [1];
    printf("Please write down a string: ");
    gets(text);
    printf("\n");

    printf("Your sentence is: %s", text);
    printf("\n");
    printf("\n");

    char space [1];
    printf("Choose a character to replace the space between words: ");
    scanf(" %c", &space);

    printf("Your new sentence is:\n");

    int i=0;
    int a;
    while (text[i]!=0)
    {
        a=text[i];
        if (text[i]==' ')
        {
            text[i]=space;
        }
        printf("%c", text[i]);

        i++;
    }





    return 0;
}

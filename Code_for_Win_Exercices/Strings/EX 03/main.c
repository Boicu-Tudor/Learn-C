#include <stdio.h>
#include <stdlib.h>

/*
*C to separate the individual characters from a string.
*/




int main()
{
    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s\n", text);

    printf("\n");
    printf("Your string with separate characters is: ");

    for (int i=0; text[i]!=0; i++)
    {
        printf("%c ", text[i]);
    }
    printf("\n");





    return 0;
}

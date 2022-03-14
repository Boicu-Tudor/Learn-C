#include <stdio.h>
#include <stdlib.h>

/*
*C to count the total number of words in a string.
*/


int main()
{

    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s\n", text);

    int words,i;
    i=0;
    words=1;

    while (text[i]!='\0')
    {
        if (text[i]==' '||text[i]=='\n'|| text[i]=='\t')
        {
            words++;
        }
        i++;
    }

        if (text[0]==' ')
        {
            printf("Please dont use space as first word.");
        }else
        {
            printf("Your string has %d words.", words);
        }

    return 0;
}

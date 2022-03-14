#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
*C to read a sentence and replace lowercase characters by uppercase and vice-versa.
*/




int main()
{
    char text [1000];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");

    printf("Your sentence is: \n%s", text);
    printf("\n");
    printf("\n");
    printf("Your new sentence is: \n");

    int a,i;


    while (text[i]!=0)
    {
        a=text[i];
        a=(islower(text[i])&& a>='a'&& a<='z'&& a!=' ')?toupper(text[i]):tolower(text[i]);
        printf("%c",a);
        i++;
    }
    text[i]='\0';
    printf("\n");
    return 0;
}

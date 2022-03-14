#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
*C to convert a string to uppercase.
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
        a=(islower(text[i])&& a>='a'&& a<='z'&& a!=' ')?toupper(text[i]):toupper(text[i]);
        printf("%c",a);
        i++;
    }
    text[i]='\0';
    printf("\n");


    printf("Your new sentence is: %s.", text);
    return 0;
}

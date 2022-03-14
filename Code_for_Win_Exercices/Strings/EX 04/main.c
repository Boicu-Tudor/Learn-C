#include <stdio.h>
#include <stdlib.h>

/*
*C to print individual characters of string in reverse order.
*/


int main()
{

    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s\n", text);

    printf("\n");
    printf("Your reverse string is: ");
    int l=strlen(text);
    int j;
    while (text[l]>=0)
    {
        j=text[l];
        l--;
        printf("%c ", j);
    }




    return 0;
}

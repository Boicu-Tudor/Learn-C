#include <stdio.h>
#include <stdlib.h>

/*
*C to find the length of a string without using library function.
*/


int main()
{
    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s", text);



    int count;
    for (int i=0; text[i]!=0; i++)
    {
        count++;
    }
    printf("\n");
    printf("Your string has a length of: %d characters.", count);
    printf("\n");



    return 0;
}

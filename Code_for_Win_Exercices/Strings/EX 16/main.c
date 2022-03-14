#include <stdio.h>
#include <stdlib.h>

/*
*C to find the number of times a given word 'the' appears in the given string.
*/




int main()
{
    char text [1000];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");

    printf("Your sentence is: %s.", text);
    printf("\n");
    printf("\n");

    int count;

    for (int i=0; text[i]>=0; i++)
    {
        if((text[i]=='t'||text[i]=='T')&&(text[i+1]=='h'||text[i+1]=='H')&&(text[i+2]=='e'||text[i+2]=='E'))
        {
            count++;
        }
    }

    printf("'The' appears %d times in the sentence.", count);

    return 0;
}

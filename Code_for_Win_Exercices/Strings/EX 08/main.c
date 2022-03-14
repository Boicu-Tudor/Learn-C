#include <stdio.h>
#include <stdlib.h>

/*
*C to copy one string to another string;
*/


int main()
{
    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s\n", text);

    int count=0;
    for (int i=0; text[i]!=0; i++)
    {
        count++;
    }

    char text2[100];
/*
    for (int i=0; text[i]>=0; i++)
    {
        for (int j=0; text2[j]>=0; j++)
        {
            text2[j]=text[i];
        }
    }
*/
    int i;
    i=0;
    while (text[i]!='\0')
    {
        text2[i]=text[i];
        i++;
    }


    printf("The second string is: \n%s",text2);

    printf("\n");
    printf("You copied %d characters.", count);


    return 0;
}

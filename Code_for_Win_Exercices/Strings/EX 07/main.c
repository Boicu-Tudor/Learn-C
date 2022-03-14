#include <stdio.h>
#include <stdlib.h>

/*
*C to count total number of alphabets, digits and special characters in a string.
*/

int main()
{

    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");
    printf("Your string is: %s\n", text);

    int spec, alph, num;
    spec=alph=num=0;

    int i=0;
    while (text[i]!='\0')
    {
        if ((text[i]>='a' && text[i]<'z')||(text[i]>='A' && text[i]<'Z'))
        {
            alph++;
        }else if (text[i]>='0' && text[i]<='9')
        {
            num++;
        }else
        {
            spec++;
        }
        i++;
    }

    printf("\n");
    printf("The string has:\n");
    printf("Alphabet characters: %d.\n", alph);
    printf("Number characters: %d.\n", num);
    printf("Special characters: %d.\n", spec);


    return 0;
}

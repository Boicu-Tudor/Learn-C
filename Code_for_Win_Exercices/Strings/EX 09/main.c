#include <stdio.h>
#include <stdlib.h>

/*
*C to count total number of vowel or consonant in a string.
*/


int main()
{

    char text [100];
    printf("Please write down your string: ");
    gets(text);
    printf("\n");

    int vow=0, con=0;

    for (int i=0; text[i]>=0;i++)
    {
     if (text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
        {
            vow++;
        }else if((text[i]>='a'&&text[i]<='z')||(text[i]>='A'&&text[i]<='Z'))
        {
            con++;
        }
    }

    printf("The total number of vowels is: %d\n", vow);
    printf("The total number of consonants is: %d\n", con);

    return 0;
}

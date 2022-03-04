#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to check whether an alphabet is vowel or consonant using if else.
*/

    char x;
    printf("Enter an alphabet char:");
    scanf("%c", &x);

    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||
        x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("%c is a vowel", x);
    }else if (x>='a'&& x<='z')
    {
        printf("%c is a consonant", x);
    }else
    {
       printf("%c is not from alphabet",x);
    }




    return 0;
}

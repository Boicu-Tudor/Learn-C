#include <stdio.h>
#include <stdlib.h>

/*
*C program to find length of a string using loop. How to find length of a string without using in-built library function strlen() in C programming.
*/

    int lenght (char text1)
    {
        char text2;
        text2=text1;
        int count=0;
        for (int i=0; text[i]!=0; i++)
        {
            count++;
        }
    }




int main()
{

    char text[100];
    printf("Input your string here: ");
    gets(text);

    int *ptr;
    ptr=&lenght;

    printf("Your string is: %d", *ptr);




    return 0;
}

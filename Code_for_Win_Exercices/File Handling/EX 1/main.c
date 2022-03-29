#include <stdio.h>
#include <stdlib.h>

/*
*C to create and store information in a text file.
*/

int main()
{


    char text [100];
    char title [20]="test02.txt";
    FILE *ptr;

    ptr = fopen(title,"a");

    if (ptr==NULL)
    {
        printf("Error...");
        exit(EXIT_FAILURE);
    }

    printf("Input your sentence: ");
    fgets(text, 100, stdin);

    fprintf(ptr,"%s", text);

    fclose(ptr);

    printf("\nSaved...\n");


    return 0;
}

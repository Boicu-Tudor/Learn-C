#include <stdio.h>
#include <stdlib.h>

/*
*C to read an existing file.
*/


int main()
{

/* -- Here I created the file for second part of exercice --

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

*/

    char line;
    char title [20]="test02.txt";
    FILE *ptr;

    ptr=fopen(title, "r");

    //fgets(line, 100, ptr);
    //fgets(line, 100, ptr);
    //printf("%s", line);

    while (line!=EOF)
    {
        line=fgetc(ptr);
        printf("%c", line);

    }

    fclose(ptr);
    printf("\n");
    return 0;
}

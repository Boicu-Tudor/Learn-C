#include <stdio.h>
#include <stdlib.h>

/*
* C to write multiple lines in a text file
*/


int main()
{

    FILE *ptr;
    int i,j;
    char text [100];
    char title [20]="test01.txt";
    char x;

    printf("Put the number of rows you want to write: ");
    scanf("%d", &j);

    ptr = fopen(title, "w");

    for (i=0; i<j+1; i++)
    {

        fgets(text,100, stdin);
        fputs(text, ptr);

    }

    fclose(ptr);

    printf("\n");
    printf("Saved...\n");


    printf("The text in your file is: \n");

      ptr=fopen(title, "r");
      while (x!=EOF)
      {
          printf("%c",x);
          x=fgetc(ptr);

      }
        fclose(ptr);






    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C to print all natural numbers between 1 to n.
*/

 int natural (int min, int max)
    {
        int i;
        for (i=min; i<max; i++)
        {
            printf("%d, ", i);
        }
        if (min=max-1)
        {
            printf("%d.", max);
        }

    }



int main()
{
    int x, y;
    printf("Please enter an interval to see all naturl numbers:\n");
    scanf("%d\n %d", &x, &y);

    printf("\n");
    printf("The natural numbers are:\n");

    natural(x,y);


    return 0;
}

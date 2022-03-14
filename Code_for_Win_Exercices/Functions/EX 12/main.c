#include <stdio.h>
#include <stdlib.h>


/*
*C  to print all even or odd numbers between 1 to n.
*/

    int oddeven (int min, int max)
    {
        int i,j;
        int odd, even;

        printf("All odd numbers are: ");
        for (i=min; i<max-1; i++)
        {
            odd=i;
            if (odd%2!=0)
            {
                printf("%d, ", odd);
            }

        }

         if (max%2!=0)
            {
                printf("%d.", max);
            }else printf ("%d.", max-1);
        printf("\n");

        printf("All even numbers are: ");
        for (j=min; j<max-1; j++)
        {
            even=j;
            if(even%2==0)
            {
                printf("%d, ", even);
            }

        }
          if (max%2==0)
            {
                printf("%d.", max);
            }else printf ("%d.", max-1);

            return oddeven;
    }




int main()
{

    int x, y;
    printf("Please select an interval to see the odd and even numbers:\n");
    scanf("%d\n %d", &x,&y);

    printf("\n");
    oddeven(x,y);




    return 0;
}

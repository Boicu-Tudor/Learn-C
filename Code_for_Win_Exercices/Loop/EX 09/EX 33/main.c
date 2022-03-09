#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*C program to find all Perfect numbers between 1 to n.
*/


int main()
{
    int num1, num2, i, j, sum;

    printf("Please choose an interval:\n");
    scanf("%d\n %d", &num1, &num2);

    printf("\n-------------------------------- \n");
    printf("The perfect numbers between %d and %d are:\n",num1, num2);

    for (i=num1; i<num2; i++)
    {

    sum=0;


        for (j=1; j<i; j++)
        {
            if (i%j==0)
            {
                sum = sum +j;
            }

        }

        if (sum==i)
            {
            printf("%d\n",i);
            }


    }


    return 0;
}

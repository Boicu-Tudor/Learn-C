#include <stdio.h>
#include <stdlib.h>

/*
*C function to print all perfect numbers in a given interval.
*/

int perfect (int num3, int num4)
{
    int num1, num2, i, j, sum;
    num1=num3;
    num2=num4;

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
}





int main()
{

    int num1, num2;
    printf("Please enter an interval:\n");
    scanf("%d\n %d", &num1, &num2);

    printf("--------------------------------\n");
    printf("The perfect numbers between %d and %d are:\n",num1, num2);

    perfect(num1, num2);




    return 0;
}

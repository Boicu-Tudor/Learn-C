#include <stdio.h>
#include <stdlib.h>

/*
*C to find sum of all even or odd numbers in a given range.
*/

    int SUModdeven (int min, int max)
    {
        int i,j, sum1, sum2;
        int odd, even;
        sum1, sum2=0;

        printf("The summ of all odd numbers is: ");
        for (i=min; i<=max; i++)
        {
            odd=i;
            if (odd%2!=0)
            {
                sum1=sum1+odd;
            }

        }
        printf("%d", sum1);


        printf("\n");

        printf("The sum of all even number is: ");
        for (j=min; j<=max; j++)
        {
            even=j;
            if(even%2==0)
            {
                sum2=sum2+even;
            }
        }

        printf("%d", sum2);


            return SUModdeven;
    }














int main()
{

    int x, y;
    printf("Please select an interval to see the summ of all odd and even numbers:\n");
    scanf("%d\n %d", &x,&y);

    printf("\n");
    SUModdeven(x,y);




    return 0;
}

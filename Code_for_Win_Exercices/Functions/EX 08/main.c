#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
*C function to print all Armstrong numbers between given interval in C programming
*/

int armstrong (int num1, int num2)
{
    int i, m, digit, last, sum;

    for (i=num1; i<=num2; i++)
{
    sum=0;
    m=i;
    digit = log10(m)+1;

    while (m>0)
    {

        last=m%10;
        sum=sum+ round(pow(last, digit));
        m/=10;

    }
        if (i==sum)
        {
        printf("%d\n",i);
        }
}
}

int main()
{
    int x, y;
    printf("Please enter an interval:\n");
    scanf("%d\n %d", &x, &y);

    printf("The armstrong number between %d and %d are:\n", x, y);

    armstrong(x,y);



    return 0;
}

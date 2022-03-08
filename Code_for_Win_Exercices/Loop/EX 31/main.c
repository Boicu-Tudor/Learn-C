#include <stdio.h>
#include <stdlib.h>

/*
*C program to print all Armstrong numbers between 1 to n.
*/


int main()
{

    int y;
    int i, last, sum, digit, m;

    printf("Please enter a number: ");
    scanf("%d", &y);




    printf("The Armstrong numbers between 1 and %d are: \n", y);

for (i=1; i<=y; i++)
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


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*C program to check whether a number is  armstrong, perfect number or not using functions.
*/


int Armstrong(int num1)
{
    int x, last, sum, digit, originalx;
    x=num1;
    digit = log10(x)+1;
    sum=0;
    originalx=x;

    while (x!=0)
    {
        last=x%10;
        sum=sum+ round(pow(last, digit));
        x/=10;
    }

    if (originalx==sum)
    {
        printf("This number is Armstrong\n");
    }else
    {
        printf("This number is not Armstrong\n");
    }
}


int Perfect(int num1)
{
    int x, sum, i;
    x=num1;
    sum=0;


    for (i=1; i<x; i++)
    {
        if (x%i==0)
        {
            sum=sum+i;
        }

    }

    if (x==sum)
    {
        printf("This is a perfect number\n");
    }else
    {
        printf("This is not a perfect number\n");
    }

}


int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    Armstrong(x);
    Perfect(x);


    return 0;
}

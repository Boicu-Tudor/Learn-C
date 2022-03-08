#include <stdio.h>
#include <stdlib.h>

/*
*C program to input a number and check whether the number is Perfect number or not.
*/






int main()
{

    int x, sum, i;
    printf("Please enter a number: ");
    scanf("%d", &x);

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
        printf("This is a perfect number");
    }else
    {
        printf("This is not a perfect number");
    }




    return 0;
}

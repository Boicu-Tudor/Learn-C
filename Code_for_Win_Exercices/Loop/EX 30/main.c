#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*C program to input a number from user and check whether given number is Armstrong number or not.
*/
int main()
{
    int x, last, sum, digit, originalx;

    printf("Please enter a number: ");
    scanf("%d", &x);

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
        printf("This number is Armstrong");
    }else
    {
        printf("This number is not Armstrong");
    }

    return 0;
}

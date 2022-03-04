#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to check positive, negative or zero using simple if or if else.
*/
int x;

printf("Please enter your number:");
scanf("%d", &x);



if (x>0)
{
    printf("%d is pozitive", x);
}else if (x<0)
{
    printf("%d is negative", x);
}else
{
    printf("%d is zero",x);
}







    return 0;
}

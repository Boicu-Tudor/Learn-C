#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input a year and check whether year is leap year or not using conditional/ternary operator ?:.
*/

  int year;
    printf("Enter your number:");
    scanf("%d",&year);

    printf("%d->", year);
    year%4==0 && year%100!=0?printf("The year is leap."):year%400==0?printf("The year is leap."):printf("The year is not leap.");

}

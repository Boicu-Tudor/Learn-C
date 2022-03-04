#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
*/

double principle;
double time;
double rate;


printf("Please eneter principle:");
scanf("%lf",&principle);

printf("Please eneter time:");
scanf("%lf", &time);

printf("Please eneter rate:");
scanf("%lf", &rate);


double simple;

simple = (principle*time*rate)/100;

printf("Your principle interest is: %.2f", simple);



    return 0;
}

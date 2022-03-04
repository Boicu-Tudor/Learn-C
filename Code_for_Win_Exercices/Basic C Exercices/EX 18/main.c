#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*
*C program to input principle (amount), time and rate (P, T, R) and find Compound Interest.
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


double compound;

compound = principle*pow((1+rate/100), time);

printf("Your Compound Interest is: %.3f", compound);


    return 0;
}

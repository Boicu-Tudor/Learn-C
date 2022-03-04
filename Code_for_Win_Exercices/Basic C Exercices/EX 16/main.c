#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects.
*/

double math, eng, sport, psy, arts;

printf("Please enter your grade for math:");
scanf("%lf", &math);
printf("Please enter your grade for english:");
scanf("%lf", &eng);
printf("Please enter your grade for sport:");
scanf("%lf", &sport);
printf("Please enter your grade for psychology:");
scanf("%lf", &psy);
printf("Please enter your grade for arts:");
scanf("%lf", &arts);

double sum =(math+eng+sport+psy+arts);

double average = sum/5;

double percentage = (sum*100)/50;

printf("Your average is: %.2f\nYour percentage is: %.2f", average, percentage);

    return 0;
}

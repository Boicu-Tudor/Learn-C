#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    *C program to input number of days from user and convert it to years, weeks and days
*/

    int days;
    printf("Enter how many days would you like to convert in years:");
    scanf("%d", &days);

    int year;
    int month;
    int week;
    int day;

    year = days/365;
    month= (days-(year*365))/30;
    week = (days-((year*365)+(month*30)))/7;
    day = days - ((year*365)+(month*30)+(week*7));

    printf("%d days = %d years, %d months, %d weeks and %d days",days, year, month, week, day);



    return 0;
}

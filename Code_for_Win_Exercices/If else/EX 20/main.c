#include <stdio.h>
#include <stdlib.h>

/*
*Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%
*/

int main()
{

    double input;

    printf("Please enter your salary:");
    scanf("%lf", &input);


    double da, hra, gross_salary;


    if (input<=10000)
    {
        da=input*0.8;
        hra=input*0.2;
    }else if (input<=20000)
    {
        da=input*0.9;
        hra=input*0.25;
    }else
    {
        da=input*0.95;
        hra=input*0.3;
    }


    gross_salary= input+hra+da;

    printf("Your gross salary is: %.2f", gross_salary);








    return 0;
}

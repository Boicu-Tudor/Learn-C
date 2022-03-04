#include <stdio.h>
#include <stdlib.h>

/*
*Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/



int main()
{

    int consum;

    printf("Please enter your electricity unit charge:");
    scanf("%d", &consum);

    double amt, bill, consum_total;

    if(consum<=50)
    {
        amt=consum*0.50;
    }else if (consum<=150)
    {
        amt=25+(consum-50)*0.75;
    }else if(consum<=150)
    {
        amt=100+((consum-150)*1.20);
    }else if (consum<=250)
    {
        amt=220+((consum-250)*1.50);
    }else
    {
        printf("Invalid data");
    }


    bill=amt*0.2;
    consum_total=amt+bill;

    printf("Electricity bill: Rs. %.2f", consum_total);

    return 0;
}

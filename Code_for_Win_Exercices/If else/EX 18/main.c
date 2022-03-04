#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to input cost price and selling price of a product and check profit or loss.
*/

    int cost, sell;

    printf("Enter your cost price:");
    scanf("%d", &cost);

    printf("Enter your selling price:");
    scanf("%d", &sell);


    int profit, loss;
    profit = sell-cost;
    loss = cost-sell;

    if(profit>0)
    {
        printf("Your profit is:%d", profit);
    }else if (profit<0)
    {
        printf("Your loss is: %d", loss);
    }else if (profit==0)
    {
        printf("No profit, no loss");
    }else
    {
         printf("Invalid data");
    }




    return 0;
}

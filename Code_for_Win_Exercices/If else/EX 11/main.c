#include <stdio.h>
#include <stdlib.h>


int main()
{
/*
*C program to input week number(1-7) and print the corresponding day of week name using if else.
*/

    int num;
    printf("Enter a number between 1-7:");
    scanf("%d", &num);

    if (num==1)
    {
        printf("Its Monday");
    }else if (num==2)
    {
        printf("Its Tuesday");
    }else if (num==3)
    {
        printf("Its Wednesday");
    }else if (num==4)
    {
        printf("Its Thursday");
    }else if (num==5)
    {
        printf("Its Friday");
    }else if (num==6)
    {
        printf("Its Saturday");
    }else if (num==7)
    {
        printf("Its Sunday");
    }else
    {
        printf("I said between 1 and 7 not %d", num);
    }





    return 0;
}

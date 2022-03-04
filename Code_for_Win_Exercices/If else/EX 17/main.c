#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*
*C program to find all roots of a quadratic equation using if else.
*/


    double a, b, c;

    printf("Enter your first side:");
    scanf("%lf", &a);

    printf("Enter your second side:");
    scanf("%lf", &b);

    printf("Enter your third side:");
    scanf("%lf", &c);


    double delta;
    delta = (b*b)-(4*a*c);
    double root1, root2;

    if (delta>0)
    {
        root1 = (-b+sqrt(delta))/(2*a);
        root2 = (-b-sqrt(delta))/(2*a);
        printf ("Root1:%f\n", root1);
        printf ("Root2:%f\n", root2);

    }else if (delta<0)
    {
        root1 = (-b/(2*a))+((sqrt(-delta))/(2*a));
        root2 = (-b/(2*a))-((sqrt(-delta))/(2*a));
        printf ("Root3:%f\n", root1);
        printf ("Root4:%f\n", root2);
    }else if (delta==0)
    {
        root1=-(b/(2*a));
        printf ("Root:%f\n", root1);
    }else
    {
        printf("The data is invalid");
    }






    return 0;
}

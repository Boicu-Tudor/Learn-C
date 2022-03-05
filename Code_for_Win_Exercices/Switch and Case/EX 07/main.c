#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
*C program to find all roots of a Quadratic equation using switch case.
*/




int main()
{
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

    switch (delta>0)
    {

    case 1:
        root1 = (-b+sqrt(delta))/(2*a);
        root2 = (-b-sqrt(delta))/(2*a);
        printf ("Root1:%.2f\n", root1);
        printf ("Root2:%.2f\n", root2);
    break;

    case 0:
        switch (delta<0)
        {
        case 1:
        root1 = (-b/(2*a))+((sqrt(-delta))/(2*a));
        root2 = (-b/(2*a))-((sqrt(-delta))/(2*a));
        printf ("Root3:%.2f\n", root1);
        printf ("Root4:%.2f\n", root2);
        break;

        case 0:
        root1=root2=-(b/(2*a));
        printf ("Root:%.2f\n", root1);
        break;
        }
    break;
default: printf("Invalid data");

    }




    return 0;
}

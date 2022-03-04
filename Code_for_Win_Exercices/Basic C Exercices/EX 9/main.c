#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
*C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
*/

    double fan;
    printf("Insert your Fahrenheit:");
    scanf("%lf",&fan);

    double cel;
    cel = (fan-32)*5/9;

    printf("%.2f Fahrenhet = %.2f Celsius", fan, cel);

    return 0;
}

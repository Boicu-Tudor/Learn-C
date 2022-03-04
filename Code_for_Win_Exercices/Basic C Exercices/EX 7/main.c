#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    *C program to input length in centimeter and convert it to meter and kilometer.
    */

    int cm;
    printf("Enter your lenght in cm:");
    scanf("%d", &cm);

    double m,km;

    m = (double)cm/100;
    km = (double)m/1000;

    printf ("%d cm are %f m\n", cm, m);
    printf ("%f meters are %f km\n", m, km);




    return 0;
}

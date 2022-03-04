#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    *C program to input temperature in Celsius and convert to Fahrenheit
    */

    double cel;
    printf("Insert Celsius temp:");
    scanf("%lf", &cel);

    double fan;
    fan = (cel*9/5)+32;

    printf("%f Celsius is = %.2f Fahrenheit", cel, fan);





    return 0;
}

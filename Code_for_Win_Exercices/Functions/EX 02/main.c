#include <stdio.h>
#include <stdlib.h>

/*
*C program to input radius of circle from user and find diameter, circumference and area of the given circle using function.
*/

    double circle (int num1){
        double di, ar, ci;

        di = 2*num1;
        printf("The diameter is: %.f\n", di);

        ci= (2*3.14)*num1;
        printf("The circumference is: %.2f\n", ci);

        ar= (num1*num1)*3.14;
        printf("The area is: %.2f\n", ar);
    }


int main()
{
    int x;
    printf("Please choose a radius: ");
    scanf("%d", &x);

    circle(x);

    return 0;
}

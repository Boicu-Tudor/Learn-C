#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    *C program to input radius of a circle from user and find diameter, circumference and area of the circle
    */

    int radius;
    printf("Enter your radius of circle:");
    scanf("%d", &radius);

    double diameter, circumference, area;

    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*(radius*radius);

    printf("The diameter is: %f\n", diameter);
    printf("The circumference is: %f\n", circumference);
    printf("The area is: %f\n", area);



    return 0;
}

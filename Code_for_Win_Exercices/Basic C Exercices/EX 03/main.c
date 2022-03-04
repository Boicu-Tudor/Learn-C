#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    * C program to input two numbers and perform all arithmetic operations
    */

        int x, y;
        int sum, dif, prod, mod;
        double div;

printf("Enter your first number: ");
scanf("%d", &x);

printf("Enter your second number: ");
scanf("%d", &y);

sum = x+y;
dif = x-y;
prod= x*y;
div = (double)x/y;
mod = x%y;


printf("The sum is: %d\n", sum);
printf("The difference is: %d\n", dif);
printf("The product is: %d\n", prod);
printf("The division is: %f\n", div);
printf("The modulus is: %d", mod);






    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
*C program input two numbers from user and find the HCF using for loop.
*/




int main()
{

    int num1, num2;
    int min, hcf;

    printf("Please enter your first number: ");
    scanf("%d", &num1);

    printf("Please enter your second number: ");
    scanf("%d", &num2);

    min = num1 < num2? num1:num2;


    for (int i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }


    printf("The HCF of %d and %d is: %d", num1, num2, hcf);





    return 0;
}

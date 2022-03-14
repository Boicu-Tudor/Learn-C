#include <stdio.h>
#include <stdlib.h>

/*
*C program to input two or more numbers from user and find maximum and minimum of the given numbers using functions.
*/

    int MaxMin(int num1, int num2, int num3)
    {
        if(num1>num2 && num1>num3)
        {
            printf("The biggest number is: %d\n", num1);
        }else if (num2>num1 && num2>num3)
        {
            printf("The biggest number is: %d\n", num2);
        }else if (num3>num1 && num3>num2)
        {
            printf("The biggest number is: %d\n", num3);
        }else
        {
            printf("Invalid data");
        }

         if(num1<num2 && num1<num3)
        {
            printf("The lowes number is: %d\n", num1);
        }else if (num2<num1 && num2<num3)
        {
            printf("The lowest number is: %d\n", num2);
        }else if (num3<num1 && num3<num2)
        {
            printf("The lowest number is: %d\n", num3);
        }else
        {
            printf("Invalid data");
        }

    }




int main()
{
    int x, y, z;
    printf("Please enter 3 numbers below: \n");
    scanf(" %d\n %d\n %d", &x, &y, &z);

    printf("\n");
    MaxMin (x,y,z);








    return 0;
}

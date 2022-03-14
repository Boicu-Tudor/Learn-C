#include <stdio.h>
#include <stdlib.h>

/*
*C to add numbers using call by reference.
*/

    int sum (int *x, int *y)
    {
        int sum;
        sum = *x+*y;
        return sum;
    }


int main()
{
    int x, y;
    printf("Please input 2 numbers below: \n");
    scanf("%d\n%d", &x, &y);


    printf("The sum is: %d", sum(&x,&y));



    return 0;
}

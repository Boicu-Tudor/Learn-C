#include <stdio.h>
#include <stdlib.h>

/*
*C to add two numbers using pointers.
*/

int main()
{
    int x, y;
    printf("Please input 2 numbers below: \n");
    scanf("%d\n%d", &x, &y);

    int *p1, *p2;
    p1=&x;
    p2=&y;
    int sum = *p1+*p2;


    printf("The sum is: %d", sum);







    return 0;
}

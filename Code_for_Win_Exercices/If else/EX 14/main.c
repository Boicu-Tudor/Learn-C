#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
*C program to check whether a triangle is valid or not if angles are given using if else.
*/

    int x, y,z;
    printf("Please enter 3 angles:\n");
    scanf("%d %d %d", &x,&y,&z);

    int sum = x+y+z;
    if (sum<=180)
    {
        printf("The triangle is valid, it has %d grades", sum);
    }else
    {
        printf("It is too big");
    }






    return 0;
}

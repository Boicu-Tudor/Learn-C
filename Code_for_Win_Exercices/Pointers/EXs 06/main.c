#include <stdio.h>
#include <stdlib.h>

/*
*C to find the maximum number between two numbers using a pointer.
*/

    int max (int *x, int *y)
    {
        int max;
        int p1, p2;
       if (*x>*y)
       {max=*x;
       }else max=*y;

        return max;
    }



int main()
{

    int x, y;
    printf("Please input 2 numbers below: \n");
    scanf("%d\n%d", &x, &y);

    printf("The max is: %d", max(&x,&y));


    return 0;
}

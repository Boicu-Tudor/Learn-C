#include <stdio.h>
#include <stdlib.h>

/*
*C function to  reverse a number.
*/

    int revs (int x)
    {

    int last, reverse, y;

    while (x!=0)
    {
    last = x%10;
    reverse = reverse *0+last;
    x/=10;
    printf("%d", reverse);
    }

    }



int main()
{

    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    printf("The reverse of %d is: ", x);
    revs(x);







    return 0;
}

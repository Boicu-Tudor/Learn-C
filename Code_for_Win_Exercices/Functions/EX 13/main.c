#include <stdio.h>
#include <stdlib.h>

/*
*C programming to find sum of all natural numbers between 1 to n.
*/

 int sumNat (int min, int max)
    {
      int sum;
      sum =(max*(max+min))/2;

    }


int main()
{
    int x,y;
    printf("Please enter an interval to see the sum of it:\n");
    scanf("%d\n %d", &x, &y);

    printf("The sum of the numbers between %d and % is: %d", x, x, sumNat(x,y));


    return 0;
}

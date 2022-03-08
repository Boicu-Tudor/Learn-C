#include <stdio.h>
#include <stdlib.h>

/*
*C program to input number from user and check number is palindrome or not using loop.
*/


int main()
{

    int x;
    int last, reverse;
    printf("Please enter a number:");
    scanf("%d", &x);
    const int y=x;

     while (x!=0)
    {
    last = x%10;
    reverse = reverse *10;
    reverse= last+reverse;
    x/=10;
    }

    y==reverse? printf("The number %d is palindrome.\n", y): printf ("The number %d is not palindrome.\n",y);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>


/*
*C program to input a number from user and print it into words using for loop.
*/


int main()
{

    int x, y,last,zero, reverse;
    printf("Please enter a number: ");
    scanf("%d", &x);

    y=x;
    zero=x;
    zero=x%10;
    int m=x;


    while (x!=0)
    {
        last = x%10;
        reverse=reverse*10+last;
        x/=10;
    }

    printf("The words digit by digit for the number %d are: ",y);

    int z;
    z=reverse;
    while (z!=0)
    {
        last = z%10;
        switch (last)
        {
        case 0:
        printf("zero ");
        break;
        case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;

        }
        reverse=reverse*10+last;
        z/=10;
    }



    return 0;
}

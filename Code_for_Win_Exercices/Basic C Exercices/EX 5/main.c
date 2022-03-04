#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    *C program to input length and width of a rectangle and find area of the given rectangle.
    */

    int len;
    int wid;

    printf("Enter your length of the rectangle:");
    scanf("%d", &len);

    printf("Enter your width of the rectangle:");
    scanf("%d", &wid);

    printf("The perimeter is: %d", len*wid);




    return 0;
}

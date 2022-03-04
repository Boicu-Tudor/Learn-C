#include <stdio.h>
#include <stdlib.h>

int main()
{

int x, y, z;

printf("Please enter your first number:");
scanf("%d", &x);
printf("Please enter your second number:");
scanf("%d", &y);
printf("Please enter your third number:");
scanf("%d", &z);


if (x>y&&x>z)
{
    printf("%d is bigger", x);
}else if (y>x&&y>z)
{
    printf("%d is bigger", y);
}else
{
    printf("%d is bigger",z);
}


    return 0;
}

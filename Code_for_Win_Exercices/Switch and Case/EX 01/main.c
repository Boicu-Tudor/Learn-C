#include <stdio.h>
#include <stdlib.h>
/*
*C program to input week number(1-7) and print day of week name using switch case.
*/



int main()
{

    int day;
    printf("Choose a week day (from 1-7):");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        printf("Its monday");
            break;
        case 2:
        printf("Its tuesday");
            break;
        case 3:
        printf("Its wednesday");
            break;
        case 4:
        printf("Its thursday");
            break;
        case 5:
        printf("Its friday");
            break;
        case 6:
        printf("Its saturday");
            break;
        case 7:
        printf("Its sunday");
        default:
        printf("Invalid data");
    }








    return 0;
}

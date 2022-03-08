#include <stdio.h>
#include <stdlib.h>

/*
*C program to count frequency of digits in a given number. How to find frequency of digits in a given number using loop in C programming.
*/



int main()
{

    int x, last;
    printf("Please enter a number:");
    scanf("%d", &x);

    int y=x;



    int size = 10;
    int freq [size];


    for (int i=0; i<size; i++) //aici pune ca element 0=0/ ele 1=0?
    {
        freq[i]=0;
    }

    while (x!=0)            // aici pune ca elemetul 4=0+1?/ elementul 4=1+1/ elemen 0 =0+1?
    {
         last = x%10;
         x/=10;
         freq[last]++;
    }

    printf("Freq of each digit in %d is: \n", y); // aici pune de la 1 la 9 - apoi elem 0 = nr din Array? elem 4=2 etc?
    for (int i=0; i<size; i++)
    {
        printf("Freq of %d = %d\n", i, freq[i]);
    }


    return 0;
}

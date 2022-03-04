#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
* C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
*/

    int input;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    note500=note100=note50=note20=note10=note5=note2=note1=0;

    printf("Enter a number:");
    scanf("%d", &input);

    if (input>=500)
    {
        note500=input/500;
        input -=note500*500;

    }if (input>=100)
    {
        note100=input/100;
        input -=note100*100;
    }if (input>=50)
    {
        note50=input/50;
        input -=note50*50;
    }if (input>=20)
    {
        note20=input/20;
        input -=note20*20;
    }if (input>=10)
    {
        note10=input/10;
        input -=note500*10;
    }if (input>=5)
    {
        note5=input/5;
        input -=note5*5;
    }if (input>=2)
    {
        note2=input/2;
        input -=note2*2;
    }if (input>=1)
    {
        note1=input;

    }else
    {
        printf("Input is Invalid");
    }

    printf("Total number of notes\n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);




/*

    // daca ai o bacnota de 900 lei cate ai de ceilalti lei

    int bani;
    scanf("%d", &bani);

    int b500,b100,b10,b5;

    b500=bani/500;
    b100=(bani-(b500*500))/100;
    b10= (bani-((b500*500)+(b100*100)))/10;
    b5 = bani-((b500*500)+(b100*100)+(b10*10));

    printf("Total number of bacnote\n");
    printf("500 = %d\n", b500);
    printf("100 = %d\n", b100);
    printf("10 = %d\n", b10);
    printf("5 = %d\n", b5);

*/











    return 0;
}

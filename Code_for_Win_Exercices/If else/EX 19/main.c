#include <stdio.h>
#include <stdlib.h>
/*
*C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/

int main()
{



    int phy, che, bio, mat, com;

    printf("Please enter you mark for Physics:");
    scanf("%d", &phy);

    printf("Please enter you mark for Chemistry:");
    scanf("%d", &che);

    printf("Please enter you mark for Biology:");
    scanf("%d", &bio);

    printf("Please enter you mark for Mathematics:");
    scanf("%d", &mat);

    printf("Please enter you mark for Computer:");
    scanf("%d", &com);


    int per;
    per = (phy+che+bio+mat+com)*100/500;

    printf("Your percentage is: %d\n", per);
    if (per>=90)
    {
        printf("Your grade is: A");
    }else if (per>=80)
    {
        printf("Your grade is: B");
    }else if (per>=70)
    {
        printf("Your grade is: C");
    }else if (per>=60)
    {
        printf("Your grade is: D");
    }else if (per>=40)
    {
        printf("Your grade is: E");
    }else if (per<=40&&per>=0)
    {
        printf("Your grade is: F");
    }else
    {
        printf("Invalid data");
    }




    return 0;
}

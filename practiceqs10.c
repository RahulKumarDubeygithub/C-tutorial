#include<stdio.h>
int main()
/*write a program to give grades to a student
marks<30 is C
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A+
*/
{
    int marks;
    printf("please enter your marks(0-100):\n");
    scanf("%d",&marks);
    if (marks<30)
    {
        printf("C");
    }
    else if (marks>=30 && marks<70)
    {
        printf("B");
    }
    else if (marks>=70 && marks<90)
    {
        printf("A");
    }
    else if (marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else{
        printf("thank you");
    }
    return 0;
}
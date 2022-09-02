#include<stdio.h>
int main()
{
    int marks;
    printf("please enter your marks(0-100):\n");
    scanf("%d",&marks);
    marks>=0 && marks<=30?printf("fail"):printf("pass");
    return 0;
}
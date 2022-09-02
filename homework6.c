#include<stdio.h>
int main()
//print smallest number of two
{
    int num1,num2;
    printf("enter first number:\n");
    scanf("%d",&num1);
    printf("enter second number:\n");
    scanf("%d",&num2);
    if(num1<num2)
    {
        printf("smallest number is :%d",num1);
    }
    else
    {
        printf("smallest number is :\n%d",num2);
    }
    return 0;
}
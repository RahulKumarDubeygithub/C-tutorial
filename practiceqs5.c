#include<stdio.h>
int main()
//check if a number is divisible by 2 or not

{
    int num;
    printf("enter any number:\n");
    scanf("%d",&num);
    printf("0 means  not divisible and 1 means divisible:\n");
    printf("%d",num%2==0);
    return 0;
}
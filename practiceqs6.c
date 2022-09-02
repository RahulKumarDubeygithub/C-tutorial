#include<stdio.h>
int main()
//write a program to check if a number is odd or even
{
    int num;
    printf("enter any number:\n");
    scanf("%d",&num);
    printf("even and odd means here 1 and 0:\n");
    printf("%d",num%2==0);
    return 0;
}
#include<stdio.h>
int main()
//print the average of 3 numbers
{
    int a,b,c;
    printf("enter value of a:\n");
    scanf("%d",&a);
    printf("\nenter value of b:\n");
    scanf("%d",&b);
    printf("\nenter value of c:\n");
    scanf("%d",&c);
    printf("average of three numbers are:\n%0.2f",(float)(a+b+c)/3);
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    printf("sum of a and b is:\n%d",a+b);
    printf("\ndifference of a and b is:\n%d",a-b);
    printf("\nmultification of a and b is:\n%d",a*b);
    printf("\ndivision of a and b is:\n%d",a/b);
    printf("\nremainder of a and b is:\n%d",a%b);
    return 0;
}
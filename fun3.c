#include<stdio.h>
int arithmetic1(int a,int b);//fun prototype
int arithmetic2(int a,int b);//fun prototype
int arithmetic3(int a,int b);//fun prototype
int arithmetic4(int a,int b);//fun prototype
int arithmetic5(int a,int b);//fun prototype
int main()
{
    int a,b;
    printf("enter 1st number:\n");
    scanf("%d",&a);
    printf("enter 2nd number:\n");
    scanf("%d",&b);
    int arith1 = arithmetic1( a,b);//calling
    printf("sum:\n%d",arith1);
    int arith2 = arithmetic2( a,b);//calling
    printf("\ndifference:\n%d",arith2);
    int arith3 = arithmetic3( a,b);//calling
    printf("\nmultiplication:\n%d",arith3);
    int arith4 = arithmetic4( a,b);//calling
    printf("\ndivision:\n%d",arith4);
    int arith5 = arithmetic5( a,b);//calling
    printf("\nremainder:\n%d",arith5);
    return 0;
}
int arithmetic1(int a,int b)
{
    return a + b;
}
int arithmetic2(int a,int b)
{
    return a - b;
}
int arithmetic3(int a,int b)
{
    return a * b;
}
int arithmetic4(int a,int b)
{
    return a / b;
}
int arithmetic5(int a,int b)
{
    return a % b;
}
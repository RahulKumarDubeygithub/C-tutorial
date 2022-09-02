#include<stdio.h>
int sum(int a,int b);//function prototype
int main()
{
    int a,b;
    printf("enter 1st number:\n");
    scanf("%d",&a);
    printf("enter 2nd number:\n");
    scanf("%d",&b);
    int s = sum(a,b);//calling
    printf("sum is:\n%d",s);
    return 0;
}
//function definition
int sum(int x,int y)
{
return x + y;
}
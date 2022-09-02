#include<stdio.h>
//sum of n natural numbers
int sum(int n);//function declaration or function prototype and int n is parameter or formal parameter
int main()
{ int n;
    printf("please enter any number(1 to n):\n");
    scanf("%d",&n);
    printf("sum is:%d",sum(n));//here n is argument
    return 0;

}
//recursive function definition and int n is parameter or formal parameter
int sum(int n)
{
    //base case
    if(n==1)
    {
        return 1;
    }
    int sumNm1 =sum(n-1);//sum of 1 to(n-1)
    int sumN = sum(n-1) +n;
    return sumN;

}
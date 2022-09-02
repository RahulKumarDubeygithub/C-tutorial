#include<stdio.h>
int main()
//print the factorial of a number n.
{
    int n ,fact=1;
    printf("enter your number:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    printf("final factorial is:%d\n",fact);
    return 0;
}
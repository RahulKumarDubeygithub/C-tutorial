#include<stdio.h>
int main()
//print reverse of the table for a number n.
{
    int n;
    printf("please enter your number:\n");
    scanf("%d",&n);
    printf("table is:\n");
    for (int i = 10; i >=1 ; i--)
    {
        printf("%d\n",n*i);
    }
    return 0;
}
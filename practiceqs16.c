#include<stdio.h>
int main()
//print the table of anumber by input by the user
{
    int n; 
    printf("please enter any number:\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
     printf("%d\n",n*i);
    }
    return 0;
}
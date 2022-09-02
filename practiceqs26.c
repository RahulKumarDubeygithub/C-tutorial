# include<stdio.h>
#include<math.h>
//use library functions to calculate the square of  number given by user
int main()
{
    int n;
    printf("please enter any number:\n");
    scanf("%d",&n);
    printf("square of given number is:\n%0.0f",pow(n,2));
    return 0;
}
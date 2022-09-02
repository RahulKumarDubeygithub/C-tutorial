#include<stdio.h>
int main()
/*Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)
*/
{
    int num ;
    printf("please enter any number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("natural number\n");
        printf("%d",num);
    }
    else
    {
        printf("not a natural number.");
    }
    return 0;
}
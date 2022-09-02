#include<stdio.h>
int main()
//keep taking numbers as input from user until user enters an odd number
{
    int n;
    do
    {
        printf("enter your number:\n");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thanks");
    return 0;
}
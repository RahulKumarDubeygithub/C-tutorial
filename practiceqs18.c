#include<stdio.h>
int main()
//keep taking numbers as input from user until user enters a number which is multiple of 7
{
    int n;
    do{
       printf("enter any number:\n");
       scanf("%d",&n);
       printf("%d\n",n);
       if(n % 7 == 0)
       {
        break;
       }
    }while(1);
    printf("thank you!");
    return 0;
}
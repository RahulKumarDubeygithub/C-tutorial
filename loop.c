#include<stdio.h>
int main()
{
    int num;
    printf("enter number:\n");
    scanf("%d",&num);
    // i is here itrator or counter
    for ( int i = 100; i>=num;i=i-1)
    {
        printf("%d\n",i);
    }
    printf("Thankyou");
    
}
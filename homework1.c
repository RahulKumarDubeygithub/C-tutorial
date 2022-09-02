#include<stdio.h>
int main()
//area of rectangle
{
    int length,width;
    printf("enter length of rectangle:\n");
    scanf("%d", &length);
    printf("enter width of rectangle:\n");
    scanf("%d", &width);
    printf("area of rectangle is:\n%d", length * width);
    return 0;
    
}
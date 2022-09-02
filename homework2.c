#include<stdio.h>
int main()
/*
perimeter of rectangle
*/
{
int length,width;
    printf("enter length of rectangle:\n");
    scanf("%d", &length);
    printf("enter width of rectangle:\n");
    scanf("%d", &width);
    printf("perimeter of rectangle is:\n%d", 2 * (length + width));
    return 0;
}
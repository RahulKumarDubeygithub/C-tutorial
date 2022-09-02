#include<stdio.h>
#include<math.h>
int main()
/*
diagonal of rectangle
*/
{
    int length,width;
    printf("enter length of rectangle:\n");
    scanf("%d", &length);
    printf("enter width of rectangle:\n");
    scanf("%d", &width);
    printf("diagonal of rectangle is:\n%0.2f",sqrt(length * length+ width * width) );
    return 0;
}
#include<stdio.h>
int square(int side);
int rectangle(int l,int w);
float circle(float radius);
int main()
{
    int side, l, w;
    float radius;
    printf("enter side:\n");
    scanf("%d",&side);
    printf("enter length:\n");
    scanf("%d",&l);
    printf("enter width:\n");
    scanf("%d",&w);
    printf("enter radius:\n");
    scanf("%f",&radius);
 int s=square(side);
 printf("area of squre is:\n%d",s);
 int r=rectangle( l, w);
 printf("\narea of rectangle is:\n%d",r);
 float c=circle(radius);
 printf("\narea of circle is:\n%0.2f",c);
    return 0;
}
int square(int side)
{
    return side *side;
}
int rectangle(int l,int w)
{
    return l * w;
}
float circle(float radius)
{
    return 3.14 * radius * radius;
}
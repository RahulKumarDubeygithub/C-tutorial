#include<stdio.h>
void square(int n);//fun prototype
void _square(int *n);
int main()
{
    //fun call by value
    int number = 5;
    square(number);
    printf("\nnumber:\n%d",number);
//fun call by reference
    _square(&number);
    printf("\nnumber:\n%d",number);
    return 0;
}
//fun definition
void square(int n)
{
    n = n * n;
    printf("square:\n%d",n);
}
void _square(int *n)
{
  *n = *n * *n;
  printf("\nsquare:\n%d",*n);
}
#include<stdio.h>
//swap 2 numbers a and b
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
  int x = 5, y = 10;
  _swap(&x, &y);
  printf("x=%d  and y=%d\n",x,y);
}
//call by reference
void _swap(int *a, int *b)
{
   int t = *b;
    *b = *a;
     *a = t; 
}

//call by value
void swap(int a, int b)
{
    int t = b;
     b = a;
     a = t;
    printf("\na=%d  and b=%d\n",a,b);
}

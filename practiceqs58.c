//create a structure to store complex number(use arrow operator)
#include<stdio.h>
typedef struct complexNumber
{
   int real;
   int img;
}cn;


int main()
{
    cn number1={5,20};
    cn *ptr =&number1;
    printf("real part:%d\n",ptr->real);
    printf("imaginary part:%d\n",ptr->img);

    return 0;
}
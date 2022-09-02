#include<stdio.h>
int main()
{
    int age =22;
    int *ptr =&age;
    
   // printf("%d\n",*ptr);//*ptr is value ataddress age
    //printf("%d\n",ptr);//ptr is represent address
    //printf("%d\n",age);
    //printing address
    printf("%p\n",&age);//%p format specifier for pointer variable
    printf("%u\n",&age);//%u format specifier for unsigned integer
    printf("%p\n",ptr);
    printf("%u\n",&ptr);
    return 0;
}
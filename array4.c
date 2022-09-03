#include<stdio.h>
//pointer difference and comparison
int main()
{
  int age = 25;
  int _age = 30;
  int *ptr = &age;
  int *_ptr = &_age;
  printf("%u, %u difference = %u\n",ptr ,_ptr ,ptr-_ptr);
  _ptr = &age;
  printf("comparison = %u\n",ptr == _ptr);
  return 0;  
}
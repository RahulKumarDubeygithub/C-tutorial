#include<stdio.h>
int main()
{
    int age = 23;
    int *ptr = &age;
    int **pptr  = &ptr;
    printf("%d\n",ptr);
    printf("%d\n",&age);
    printf("%d\n",*ptr); 
    printf("%d\n",**pptr);
    return 0;
}
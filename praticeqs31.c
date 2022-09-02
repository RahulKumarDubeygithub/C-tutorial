#include<stdio.h>
//print the value of "i" from its pointer to pointer
int main()
{
    int i=10;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("value of i from its pointer to pointer:\n%d",**pptr);
    return 0;
}
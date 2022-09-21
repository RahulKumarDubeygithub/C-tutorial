#include<stdio.h>
int fun(char *ptr)
{
    if(*ptr)
    {
        
        printf("%c",*ptr);
        fun(ptr+1);
        
    }
}
int main()
{
    char name[]="HELLO";
    fun(name);
}
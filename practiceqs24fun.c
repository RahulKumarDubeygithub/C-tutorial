#include<stdio.h>
//write 2 functions one to print "Hello" & second to print "good bye".
void hello();//1st function declaration or prototype
void gb();//2nd function declaration or prototype
int main()
{
    hello();//1st function calling
     gb();//2nd function calling
    return 0;
}
//1st function  definition
void hello()
{
    printf("Hello\n");
}
//2nd function  definition
void gb()
{
    printf("good bye\n");
}
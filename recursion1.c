#include<stdio.h>
//print "Hello World" 5 times
void printhw(int count);//function declaration or function prototype
int main()
{
    printhw(5);
    return 0;
}
//function definition or recursive function
void printhw(int count)
{
    if(count==0)
    {
        return;
    }
    printf("Hello World\n");
    printhw(count-1);
}
#include<stdio.h>
int main()
{
    // pointer can change
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);


    // array can not change
     char cannotChange[] = "Hello World";
     puts(cannotChange);
     cannotChange = "Hello";
     puts(cannotChange);
    return 0 ;
}
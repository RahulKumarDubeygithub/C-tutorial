#include<stdio.h>
#include<string.h>
//strcat(firstStr,secStr) i.e concatenates first string with second string
int main()
{
    char firstString[] = "Hello";
    char secondString[] = "World";
    strcat(firstString,secondString);
    puts(firstString);
    return 0;
}
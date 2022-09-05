
#include<stdio.h>
//ask the user to enter their fullName & print it back to them
void printString(char arr[]);
int main()
{
    char fullName[100];
    puts("please enter your fullname:");
    gets(fullName);
    puts(fullName);
    return 0;
}

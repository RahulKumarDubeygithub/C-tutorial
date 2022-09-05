#include<stdio.h>
//ask the user to enter their firstName & print it back to them
int main()
{
    char firstName[30];
    printf("please enter your first name:\n");
    scanf("%s",firstName);
    printf("your first name is %s\n",firstName);
    return 0;
}
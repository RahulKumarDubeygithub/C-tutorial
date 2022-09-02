#include<stdio.h>
int main()
//write a program to find if a character entered by user is uppercase or not
{
    char ch;
    printf("please enter any character:\n");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    //ch='a' and ch=97 both are same
    {
        printf("lowercase\n");
    }else if (ch>='A' && ch<='Z')
    {
        printf("uppercase\n");
    }else
    {
        printf("not a English  character");
    }
    return 0;
}
#include<stdio.h>
int main()
//to check if given character is digit or not
{
    char ch;
    printf("enter any alphabet:\n");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("given character is digit %c ",ch);     
    }
    else
    {
     printf("given character is not digit %c",ch);     

    }
    return 0;
}
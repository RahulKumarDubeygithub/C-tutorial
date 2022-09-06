#include<stdio.h>
#include<string.h>
//check if a given character is present in a string or not
void checkChar(char str[],char ch);
int main()
{
    char str[] = "bahraich";
    char ch = "b";
    checkChar(str,ch);
    return 0;
}
void checkChar(char str[],char ch)
{
    for (int  i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
        
    }
    printf("character is not present");

    
}
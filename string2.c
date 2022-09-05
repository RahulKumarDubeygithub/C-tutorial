#include<stdio.h>
//create a string firstName &lastName to store details of user & print all the characters using a loop
void printString(char arr[]);
int main()
{
    char firstName[] = "Rahul"; 
    char lastName[] = "Dubey";
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[])
{
    for (char i = 0; arr[i]!=0; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    
}

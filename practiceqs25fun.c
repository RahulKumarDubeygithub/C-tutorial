#include<stdio.h>
//write a function that prints "Namaste" if user is Indian & "Bonjour" if the user is French
void namaste();//function declaration
void bonjour();//function declaration
int main()
{

    char ch;
    printf("enter f for French & i for Indian:\n");
    scanf("%c",&ch);
    if(ch== 'i')
    {
      namaste();//function calling 
    }
    else
    {
      bonjour();//function calling
    }
    
    return 0;
}
//function definition 
void namaste()
{
    printf("Namaste\n");
}
//function definition 
void bonjour()
{
    printf("Bonjour\n");
}
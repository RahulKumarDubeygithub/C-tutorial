#include<stdio.h>
#include<string.h>
//write a functin to count  the occurence of vowels in a string
int countVowels(char str[]);
int main()
{
    char str[] ="HelloWorld";
    printf("vowels are:%d",countVowels(str));

    return 0;
}
int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] =='a'|| str[i] =='e'|| str[i] =='i'|| str[i] =='o'|| str[i] =='u')
        {
            count ++;
        }
        
    }
    return count;
    
}
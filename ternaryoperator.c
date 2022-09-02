#include<stdio.h>
int main()
{   
    int age;
    printf("please enter your age:\n");
    scanf("%d",&age);
    age>=18?printf(" you are eligible for voting."):printf("you are not eligible for voting.");
    return 0;
    
}
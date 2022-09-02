#include<stdio.h>
//eligibility criteria for voting
int main()
{
    int age;
    printf("enter your age:\n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("you are eligible for voting.\n");
        
    }
    else
    {
        printf("you are not eligible for voting.");
         
    }
    printf("Thank you.")
    return 0;
}
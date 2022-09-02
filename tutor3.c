#include<stdio.h>
int main()
//eligibilithy criteria for man
{
    int age;
    printf("please enter your age:\n");
    scanf("%d",&age);
    if(age>=13 && age<18)
    {
        printf("teenager\n");
    }
    else if (age>=18)
    {
        printf("adult");
    }
    else
    {
        printf("child");
    }
    return 0;
    
}
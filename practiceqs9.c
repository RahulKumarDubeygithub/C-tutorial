#include<stdio.h>
int main()
{
    int marks;
    printf("please enter your marks(0-100):\n");
    scanf("%d",&marks);
    if(marks>30 && marks<=100)
    {
        printf("pass");
    }
    if(marks>=0 && marks<=30)
    {
      printf("fail");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}
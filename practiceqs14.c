#include<stdio.h>
int main()
//print the numbers 0 to n,if n is given by user
{
    int  num;
    printf("please enter your number(0-n):\n");
    scanf("%d",&num);
   /* int i=0;//initialisation
    while (i<=num)//condition
    {
        printf("%d\tRAHUL KUMAR DUBEY\n",i);
        i +=1;//updation
    }
    
  */for (int i = 0; i <= num; i++)
  {
    printf("%d\tRAHUL KUMAR DUBEY\n",i);
  }
  return 0;
    
}
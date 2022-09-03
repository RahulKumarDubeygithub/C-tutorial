#include<stdio.h>
//array traversal  // array is a pointer
int main()
{
    int aadhar[10];
    //input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d index :",i);
       
       // scanf("%d",(ptr + i));
       scanf("%d",&aadhar[i]);
    }
    //output
    for(int i= 0;i<10;i++)
    {
        printf("\n%d index = %d\n",i,aadhar[i]);
    }
    return 0;
    
}

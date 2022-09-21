#include<stdio.h>
int fun(int m,int n)
{
    if(n==0 || m==0)
    {
        return 1;
    }
    else
    {
        return fun(m-1,n) + fun(m,n-1);
        
    }
}
int main()
{
    printf("%d",fun(2,3));
}
#include<stdio.h>
//factorial of n
int fact(int n);//function declaration or function prototype
int main()
{
    printf("factorial is:\n%d",fact(5));
    return 0;
}
//recursive function definition
int fact(int n)
{
    //base case (i.e the condition which stops recursion)
    if(n==1)
    {
        return 1;
    }
    int factNm1 = fact(n-1);//factorial 1 to (n-1)
    int factN = fact(n-1)*n;//factorial 1 to n
    return factN;
}
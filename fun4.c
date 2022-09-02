#include<stdio.h>//header file
void table(int n);//fun declaration and int n is parameter
int main()
{
    int n;
    printf("enter any number:\n");
    scanf("%d",&n);
    table(n);// here n is argument or actual parameter
    return 0;
}
void table(int n)//here int n is parameter or formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d",i*n);
    }
    
}
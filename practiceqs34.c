#include<stdio.h>
//write a function to calculate the sum,product & avg of 2 numbers.print that avg in the main function
void doWork(int a,int b,int *sum,int *prod,int *avg );
int main()
{
    int a = 2, b = 5;
    int sum,prod,avg;
    doWork( a,b,&sum,&prod,&avg );
    printf("sum = %d, prod = %d & avg = %d",sum,prod,avg);
    return 0;
}
void doWork(int a,int b,int *sum,int *prod,int *avg )
{
    *sum = a + b;
    *prod = a * b;
    *avg  = (a + b)/2;
}

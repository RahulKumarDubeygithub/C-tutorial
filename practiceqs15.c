#include<stdio.h>
int main()
//print the Sum of first n Natural Numbers. and reverse number
{
int n;
printf("please enter any number:\n");
scanf("%d",&n);
int sum=0;
/*for(int i=1;i<=n;i++)
{
    sum += i;//sum=sum+i

}
printf("sum of natural number:%d\n",sum);
*/
int i=1;//initialization
/*while (i<=n)//condition
{
    sum +=i;
    i++;//updation
    
}
*/do{
    sum +=i;
    i++;//updation
}while (i<=n);//condition
printf("sum of natural number:%d\n",sum);
for(int i=n;i>=1;i--)
{
    printf("%d\n",i);
}
return 0;
}

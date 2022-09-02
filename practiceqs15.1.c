#include<stdio.h>
int main()
//print the Sum of first n Natural Numbers. and reverse number
{
int n;
printf("please enter any number:\n");
scanf("%d",&n);
int sum=0;
/*for(int i=1,j=n;i<=n && j>=1;i++,j--)
{
    sum += i;//sum=sum+i
    printf("%d\n",j);
}
*/
for(int j=n;j>=1;j--)
{
    sum += j;//sum=sum+j
    printf(" reverse number:%d\n",j);
}
printf("sum is:%d\n",sum);
return 0;
}

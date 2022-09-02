#include<stdio.h>
int main()
//print all numbers from 1 to 10 except for 6.
{
for (int i = 0; i <= 10; i++)
{
    if(i==6)
    {
        continue;
    }
    printf("%d\t",i);
}
 return 0;
}
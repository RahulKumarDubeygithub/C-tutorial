#include<stdio.h>
int main()
{
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n",issunday && issnowing);


    int  ismonday = 1;
    int israining = 0;
    printf("%d",ismonday || israining);


    int x;
    printf("\nenter any value of x:\n");
    scanf("%d",&x);
    printf("%d",x>9 && x<100);
    return 0;
}
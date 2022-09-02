#include<stdio.h>
int main()
/*
are the following valid or not?
a. int a =8^8 ->valid
b. int x; int y = x;->valid
c. int x,y = x;->invalid
d.char stars = '**';->invalid
*/
{
    int a = 8^8;
    int x,y = x;
    int x; int y = x;
    char stars = '**';
    printf("%d",a);
    return 0;
}
#include<stdio.h>
//3 subjects marks of 2 students(i.e2x3)
int main()
{
int marks[2][3];//---|---
marks[0][0] = 90;
marks[0][1] = 89;
marks[0][2] = 85;

marks[1][0] = 80;
marks[1][1] = 98;
marks[1][2] = 92;

printf("%d",marks[0][0]);
return 0;
}
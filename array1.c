#include<stdio.h>
//basic understanding of array
int main()
{
    int marks[3];
    printf("enter phy:\n");
    scanf("%d",&marks[0]);
     printf("enter chem:\n");
    scanf("%d",&marks[1]);
     printf("enter math:\n");
    scanf("%d",&marks[2]); 
    printf("phy = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);
    return 0;
}
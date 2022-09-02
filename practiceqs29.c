#include<stdio.h>
//write a function to calculate percentage of a student from marks in science,math and sanskrit
float stdmarks(float science,float math,float sanskrit);
int main()
{
    float science,math,sanskrit;
    printf("enter obtained science marks:\n");
    scanf("%f",&science);
    printf("enter obtained math marks:\n");
    scanf("%f",&math);
    printf("enter obtained snaskrit marks:\n");
    scanf("%f",&sanskrit);
    printf("percentage of a student from marks in science,math and sanskrit:%0.2f\n ",stdmarks(science,math,sanskrit));
    return 0;
}
float stdmarks(float science,float math,float sanskrit)
{
    return (science + math + sanskrit)/(300.0) * 100;
}

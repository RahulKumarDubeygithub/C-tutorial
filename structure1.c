#include<stdio.h>
#include<string.h>
//to declare structure
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    //to make variable of structure
    struct  student s1;//it is just like int a= 1;
    s1.roll=46;
    s1.cgpa=8.7;
    //s1.name="RAHUL";
    strcpy(s1.name,"RAHUL");
    printf("\nSTUDENT NAME:%s\n",s1.name);
    printf("\nstudent roll number:%d\n",s1.roll);
    printf("\nstudent cgpa:%.2f",s1.cgpa);
    
    return 0;
}
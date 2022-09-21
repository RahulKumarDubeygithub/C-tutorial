#include<stdio.h>
#include<string.h>
//user defined
struct student
{
    int rollno;
    char name[100];
    float cgpa;
};
int main()
{
    struct student s1 = {105,"RAHUL KUMAR DUBEY",8.75};
    printf("student roll number:%d\n",s1.rollno);
    printf("student name:%s\n",s1.name);
    printf("student cgpa:%0.2f",s1.cgpa);
    
}

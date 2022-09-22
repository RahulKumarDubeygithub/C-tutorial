#include<stdio.h>
//user defined
struct student
{
    int roll_no;
    char name[100];
    float cgpa;
};

int main()
{
    //initializing structure
    struct student s1 ={46,"RAHUL KUMAR DUBEY",8.75};
    printf("student roll number:%d\n",s1.roll_no);
    struct student *ptr = &s1;
    printf("student roll number:%d\n",(*ptr).roll_no);
    printf("student name:%s\n",(*ptr).name);
    printf("student name:%s\n",ptr->name);//arrow operator (*ptr).code <-> ptr->code

    return 0;
    
}
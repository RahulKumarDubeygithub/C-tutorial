//write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>
//declare structure for student 1
struct student1
{
    int rollno;
    char name[50];
    float marks;

};
struct student2
{
    int rollno;
    char name[50];
    float marks;

};
struct student3
{
    int rollno;
    char name[50];
    float marks;

};
int main()
{
    //to declare variable
    struct student1 s1;
    s1.rollno = 105;
    strcpy(s1.name,"RAHUL KUMAR DUBEY");
    s1.marks = 850;
    //for student2
    struct student2 s2;
    s2.rollno = 106;
    strcpy(s2.name,"RISHABH DUBEY");
    s2.marks = 800;
    //for student3
    struct student3 s3;
    s3.rollno = 107;
    strcpy(s3.name,"Rishabh panday");
    s3.marks = 820;
    printf("\nstudent1 rollno:%d\n",s1.rollno );
    printf("\nstudent1 name:%s\n",s1.name);
    printf("\nstudent1 marks:%.2f\n",s1.marks);
    printf("\nstudent2 rollno:%d\n",s2.rollno);
    printf("\nstudent2 name:%s\n",s2.name);
    printf("\nstudent2 marks:%.2f\n",s2.marks);
    printf("\nstudent3 rollno:%d\n",s3.rollno);
    printf("\nstudent3 name:%s\n",s3.name);
    printf("\nstudent3 marks:%.2f\n",s3.marks);
    return 0;
}

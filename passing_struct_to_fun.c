#include<stdio.h>
//user defined
struct student 
{
    int roll_no;
    char name[50];
    float marks;
};
//passing structure to function
void printInfo(struct student s1);//function prototype or function declaration
int main()
{
    //structure initialization
    struct student s1 = {105,"Rahul Kumar Dubey",80};
    //function calling
    printInfo(s1);//here s1 is passed as argument
    s1.roll_no = 100;

    printf("\nstudent's roll number:%d",s1.roll_no);


}
//function definition
void printInfo(struct student s1)
{
    printf("Student's Information:");
    printf("\nstudent's roll number:%d",s1.roll_no);
    printf("\nstudent's name:%s",s1.name);
    printf("\nstudent's marks:%.2f",s1.marks);
}
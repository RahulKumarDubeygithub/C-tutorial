#include<stdio.h>
//user defined
typedef struct InformationTechnologyStudent
{
    int rollNo;
    char name[75];
    float cgpa;
}its;
int main()
{
     its s1 = {50,"Rahul Kumar Dubey",9.0};
     
     printf("Student's Name:%s",s1.name);
     return 0;
    
}

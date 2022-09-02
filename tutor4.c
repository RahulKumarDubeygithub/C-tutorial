#include<stdalign.h>
int main()
{
    int marks;
    printf("please enter your marks(0-100):\n");
    scanf("%d",&marks);
    switch(marks)
    {
    case marks<=30 && marks<70:
        printf("B");
        break;
    case marks<=70 && marks<90:
        printf("A");
        break;        
    case marks>=90 && marks<=100:
        printf("A+");
        break;
    default:
        printf("C");
    }
    return 0;
}

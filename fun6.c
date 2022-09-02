#include<stdio.h>
void printprize(float n);
int main()
{
    float n = 100.0;
    printprize(n);
    //formal argument(i.e float n) me kiye gaye change actual argument(i.e n) me reflect nahi hote hai  
    printf("value is:%0.2f\n",n);
    return 0;

}
void printprize(float n)
{
    n =n + (0.18 * n);
    printf("final price is :%0.2f\n",n);
}
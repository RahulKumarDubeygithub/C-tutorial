#include<stdio.h>
//arrays as function arguments
//function prototype or function declaration
//void printNumbers(int arr[],int n);
/*int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,};//array initialization
    printNumbers(arr,6);
    return 0;
}
//function definition
void printNumbers(int arr[],int n)
{
 for (int i = 0; i < n; i++)
 {
    printf("%d\t",arr[i]);
 }
  printf("\n");//next line
}
*/
void printNumbers(int *arr,int n);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,};//array initialization
    printNumbers(arr,6);
    return 0;
}
//function definition
void printNumbers(int *arr,int n)
{
 for (int i = 0; i < n; i++)
 {
    printf("%d\t",arr[i]);
 }
  printf("\n");//next line
}
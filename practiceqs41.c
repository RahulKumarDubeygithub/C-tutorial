#include<stdio.h>
#include<string.h>
//write a function named slice,which takes a string & return s a sliced string  from index n to m
void slice(char str[],int n,int m);

int main()
{
  char str[] = "HelloWorld";
  slice(str,3,6);
}
void slice(char str[],int n,int m)// where n &  m are valid value
{
 char newStr[100];
 int j = 0;
 for (int i = n; i <=m; i++, j++)
 {
    newStr[j] = str[i];

 }
 newStr[j] = '\0';
 puts(newStr);
 
}
#include<stdio.h>
//arr[] is array we want to search
//n is the size of arr[]
//x is the search value
int linear_search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
 int x,n,idx;
 int arr[]={5,8,2,15,62};
 //length of array
 n=sizeof(arr)/sizeof(int);
 printf("\nenter value which you want to search:\n");
 scanf("%d",&x);
 idx = linear_search(arr,n,x);
 if(idx==-1)
 {
   printf("%d is not found in the array\n",x);
 }
 else
 {
    printf("%d is present  in the array %d\n",x,idx);
 }
}
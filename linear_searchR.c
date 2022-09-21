#include<stdio.h>
int linear_searchR(int arr[],int n,int i,int x)
{
    
    if(i==n)
    {
        return -1;
    }
    else if (arr[i]==x)
    {
         return x;
    }
    else
    {
        return linear_searchR(arr,n,i+1,x);
    }
}
int main()
{
    int x,n,idx;
    int arr[]={5,5,6,45,15,7,3};
    
    n = sizeof(arr)/sizeof(int);
    printf("\nEnter value you want to search: ");
    scanf("%d", &x);
    idx = linear_searchR(arr, n, 0, x);
    if (idx == -1) {
        printf("   %d is not found in the array \n", x);
    }
    else {
        printf("%d is present in the array at index %d \n", x, idx);
    }
}
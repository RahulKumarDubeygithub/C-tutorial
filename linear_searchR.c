#include<stdio.h>
int linear_searchR(int arr[],int n,int i,int x)
{
    // i==n implies we have checked all elements of the array
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
    int arr[]={5,6,45,15.7,3};
    //length of array
    n = sizeof(arr)/sizeof(int);
    printf("\n\n   Enter value you want to search: ");
    scanf("%d", &x);
    idx = linear_searchR(arr, n, 0, x);
    if (idx == -1) {
        printf("   %d is not found in the array \n", x);
    }
    else {
        printf("   %d is present in the array at index %d \n", x, idx);
    }
}
#include<stdio.h>
binary_searchR(int nums[],int low,int high,int target)
{
    //Base condition
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(target==nums[mid])
    {
        return mid;
    }
    // discard all elements in the right search space including the middle element
    else if(target<nums[mid])
    {
        binary_searchR(nums,low,mid-1,target);
    }
    // discard all elements in the left search space including the middle element
    else
    {
        binary_searchR(nums,mid+1,high,target);
    }
}
int main()
{
    int nums[]={2,5,10,15,60,100};
    int target = 5;
    int n = sizeof(nums)/sizeof(nums[0]);
    int low = 0, high = n-1;
    int idx = binary_searchR(nums,low,high,target);
    if(idx !=-1)
    {
        printf("element found at index %d",idx);
    }
    else{
        printf("element not found in  the nums");
    } 
    return 0;
}
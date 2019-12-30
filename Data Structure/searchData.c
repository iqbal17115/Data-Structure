#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,key,start,end,mid;
    int arr[100];
    printf("Enter the number of data:");
    scanf("%d",&n);
    start=0;
    end=n-1;
    printf("Enter data sequentially:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    do
    {
        mid=((start+end)/2);
        printf("Start:%d\tEnd:%d\tMid:%d\tArr[mid]:%d\n",start,end,mid,arr[mid]);
        if(arr[mid]==key)
        {
            printf("Found At:%d",mid+1);
            break;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
            start=mid+1;
    }
    while(start<=end);
    if(start>end)
    {
        printf("Not found.");
    }
}

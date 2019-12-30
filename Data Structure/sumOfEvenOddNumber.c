#include<stdio.h>
void tr(int ar[],int m)
{
    int i;
    int ev=0,od=0;
    for(i=0;i<m;i++)
    {
        if(ar[i]%2==0)
        {
            ev=ev+ar[i];
        }
        else
        {
            od=od+ar[i];
        }
    }
    printf("Sum of even:%d\n",ev);
    printf("Sum of Odd:%d",od);
}
int main()
{
    int i,n,a[50];
    printf("Enter the amount of number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    tr(a,n);
}


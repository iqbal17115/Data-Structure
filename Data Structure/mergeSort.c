#include<stdio.h>
#include<stdlib.h>
int a[200];
void mergesort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
    merge(a,p,q,r);
    }
}
void merge(int a[],int p,int q,int r)
{
    int n1,n2,i,j,k,l[20],R[20];
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j];

    }
    l[n1+1]=999;
    R[n2+1]=999;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(l[i]<=R[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}


int main()
{
  int n,i;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the elements of the array:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  mergesort(a,0,n-1);

  printf("After sorting:");
  for(i=0;i<n;i++)
  {
       printf("%d ",a[i]);
  }


  return 0;

}

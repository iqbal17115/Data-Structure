#include<stdio.h>
void fib(int x,int y)
{
    int c,i;
    for(i=0;i<=9;i++)
    {
    printf("%d ",x);
    c=x+y;
    x=y;
    y=c;
    }
}
int main()
{
    int a=0;
    int b=1;
    fib(a,b);
}

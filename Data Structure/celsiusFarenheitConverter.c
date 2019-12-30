#include<stdio.h>
void cl(float x);
void f(float y);
int main()
{
    float a;
    printf("Enter the degree of cel:");
    scanf("%f",&a);
    f(a);
    float b;
    printf("Enter the degree of faren:");
    scanf("%f",&b);
    cl(b);
    return 0;
}
void f(float x)
{
    float ft;
    ft=(9*x)+160;
    ft=ft/5;
    printf("The result of far is:%.2f\n",ft);


}
void cl(float y)
{
    float c;
    c=(5*y)-160;
    c=c/9;
    printf("The result of cel is:%.2f",c);
}

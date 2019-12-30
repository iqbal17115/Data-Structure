#include<stdio.h>
#include<math.h>
void result1(float x, float y);
void result2(float x, float y ,float z);
int main()
{
    float a;
    printf("\nenter the base of triangle:");
    scanf("%f",&a);
    float b;
    printf("\nenter the height of triangle:");
    scanf("%f",&b);
    result1(a,b);
    float d,e,f;
    printf("\nenter the length of three sides:");
    scanf("%f %f %f",&d,&e,&f);
    result2(d,e,f);

}
void result1(float x ,float y)
{
    float r;
    r=x*y;
    r=r/2;
    printf("the area of the triangle is:%.2f",r);
}
void result2(float x,float y,float z)
{
    float s,r2,s1;
    s=(x+y+z)/2;
    r2=(s-x)*(s-y)*(s-z);
    r2=s*r2;
    s1=sqrt(r2);

    printf("the area of the triangle is:%.2f",s1);
}

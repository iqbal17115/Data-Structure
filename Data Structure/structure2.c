#include<stdio.h>
struct student
{
    int id;
    char name[30];
    float percentage;
};
int main()
{
    int i;
    struct student record1;
    struct student *prc;
    prc=&record1;
    printf("Input Records of a student:\n");printf("Id:");
    scanf("%d",&prc->id);
    printf("Name is:");
    scanf("%s",prc->name);
    printf("Percentage is:");
    scanf("%f",&prc->percentage);
    printf("Records of a student:\n");
    printf("Id is %d\n",prc->id);
    printf("Name is %s\n",prc->name);
    printf("Percentage is %.2f\n",prc->percentage);
}


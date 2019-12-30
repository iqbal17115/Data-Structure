#include<stdio.h>
#include<string.h>
void main()
{
    float x;
    typedef struct
    {
        int day;
        int month;
        int year;
    }date;
    typedef struct
    {
        char ft[20];
        char st[20];
        date birthday;
        float salary;
    }person;
    person ex;
    person a[20];
    person *ptr=&ex;
    date *birth=&ex.birthday;
    strcpy(ex.ft,"Iqbal");
    strcpy(ex.st,"Hossain");
    ptr->birthday.day=14;
    ex.birthday.month=2;
    birth->year=96;
    x=6500.00;
    ptr->salary=x;
    printf("Name:%s %s\n",ex.ft,ex.st);
    printf("Date of birth:%d/%d/%d\n",ptr->birthday.day,ex.birthday.month,birth->year);
    printf("Salary:%.2f",ptr->salary);
}

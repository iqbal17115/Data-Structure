#include<stdio.h>
struct student
{
    float math;
    float phy;
    float bio;5

};
int main()
{
    struct student result[5];
    int i,j=1;
    float sum[5];
    for(i=0;i<5;i++)
    {
        printf("Enter your math result:");
        scanf("%f",&result[i].math);
        printf("\n");
        printf("Enter your phy result:");
        scanf("%f",&result[i].phy);
        printf("\n");
        printf("Enter your bio result:");
        scanf("%f",&result[i].bio);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=result[i].math+result[i].phy+result[i].bio;
    }
    for(i=0;i<5;i++)
    {
        printf("%d.Average Result:%.2f\n",j++,sum[i]);
    }


}
